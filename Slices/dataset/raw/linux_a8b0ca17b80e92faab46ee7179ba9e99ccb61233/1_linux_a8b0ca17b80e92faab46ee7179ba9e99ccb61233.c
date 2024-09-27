static void alpha_perf_event_irq_handler(unsigned long la_ptr,
					struct pt_regs *regs)
{
	struct cpu_hw_events *cpuc;
	struct perf_sample_data data;
	struct perf_event *event;
	struct hw_perf_event *hwc;
	int idx, j;

	__get_cpu_var(irq_pmi_count)++;
	cpuc = &__get_cpu_var(cpu_hw_events);

	/* Completely counting through the PMC's period to trigger a new PMC
	 * overflow interrupt while in this interrupt routine is utterly
	 * disastrous!  The EV6 and EV67 counters are sufficiently large to
	 * prevent this but to be really sure disable the PMCs.
	 */
	wrperfmon(PERFMON_CMD_DISABLE, cpuc->idx_mask);

	/* la_ptr is the counter that overflowed. */
	if (unlikely(la_ptr >= alpha_pmu->num_pmcs)) {
		/* This should never occur! */
		irq_err_count++;
		pr_warning("PMI: silly index %ld\n", la_ptr);
		wrperfmon(PERFMON_CMD_ENABLE, cpuc->idx_mask);
		return;
	}

	idx = la_ptr;

	perf_sample_data_init(&data, 0);
	for (j = 0; j < cpuc->n_events; j++) {
		if (cpuc->current_idx[j] == idx)
			break;
	}

	if (unlikely(j == cpuc->n_events)) {
		/* This can occur if the event is disabled right on a PMC overflow. */
		wrperfmon(PERFMON_CMD_ENABLE, cpuc->idx_mask);
		return;
	}

	event = cpuc->event[j];

	if (unlikely(!event)) {
		/* This should never occur! */
		irq_err_count++;
		pr_warning("PMI: No event at index %d!\n", idx);
		wrperfmon(PERFMON_CMD_ENABLE, cpuc->idx_mask);
		return;
	}

	hwc = &event->hw;
	alpha_perf_event_update(event, hwc, idx, alpha_pmu->pmc_max_period[idx]+1);
 	data.period = event->hw.last_period;
 
 	if (alpha_perf_event_set_period(event, hwc, idx)) {
		if (perf_event_overflow(event, 1, &data, regs)) {
 			/* Interrupts coming too quickly; "throttle" the
 			 * counter, i.e., disable it for a little while.
 			 */
			alpha_pmu_stop(event, 0);
		}
	}
	wrperfmon(PERFMON_CMD_ENABLE, cpuc->idx_mask);

	return;
}
