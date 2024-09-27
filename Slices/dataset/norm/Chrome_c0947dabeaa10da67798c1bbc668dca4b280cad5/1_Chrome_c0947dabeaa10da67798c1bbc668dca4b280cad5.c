VAR1::string VAR2::FUN1(
    const VAR3& VAR4,
    const VAR5& VAR6,
    VAR7* VAR8) const {
  if (VAR9.FUN2()) {
    if (!VAR10.FUN2())
      FUN3(VAR10, VAR8);
    return VAR11;
  }
  bool VAR12 = true;
  for (VAR13::iterator VAR14 = VAR9.FUN4();
       VAR14 != VAR9.FUN5(); ++VAR14) {
    if (VAR14->VAR15 == VAR16) {
      VAR17::VAR18::size_type VAR19 = VAR11.FUN6(VAR20);
      VAR12 = VAR19 != VAR17::VAR18::VAR21 &&
          (static_cast<VAR17::VAR18::VAR22>(VAR14->VAR23) > VAR19);
      break;
    }
  }
  VAR1::string VAR24;
  VAR17::string16 VAR25;
  VAR17::string16 VAR26;
  VAR27->FUN7(VAR4, VAR12, &VAR24,
                            &VAR25, &VAR26);
  VAR1::string VAR28 = VAR11;
  for (VAR13::reverse_iterator VAR14 = VAR9.FUN8();
       VAR14 != VAR9.FUN9(); ++VAR14) {
    switch (VAR14->VAR15) {
      case VAR29:
        FUN10(VAR1::FUN11(), VAR24, *VAR14, &VAR28);
        break;
      case VAR30:
        FUN12(!VAR14->VAR31);
        if (!VAR4.VAR32.FUN2()) {
          VAR3 FUN13(VAR4);
          VAR33.VAR32.FUN14();
          VAR34 FUN15(FUN16(
              VAR33, VAR6, NULL));
          if (VAR35.FUN17()) {
            FUN10(
                VAR36, VAR4.VAR32, *VAR14, &VAR28);
          }
        }
        break;
      case VAR37:
        FUN12(!VAR14->VAR31);
        FUN10(
            VAR1::FUN11(), VAR6.FUN18(), *VAR14, &VAR28);
        break;
      case VAR38:
        FUN12(!VAR14->VAR31);
        FUN10(
            VAR1::FUN11(), VAR6.FUN19(), *VAR14,
            &VAR28);
        break;
      case VAR39:
        FUN12(!VAR14->VAR31);
        if (!VAR4.VAR40.FUN2()) {
          const VAR1::VAR41& VAR42 =
              VAR43::FUN20(VAR4.VAR40,
                                         true);
          FUN10(VAR36, VAR42, *VAR14, &VAR28);
        }
        break;
      case VAR44:
        FUN12(!VAR14->VAR31);
        if (VAR4.VAR45 != VAR17::VAR18::VAR21)
          FUN10(
              VAR36,
              VAR17::FUN21(STRING VAR46, VAR4.VAR45),
              *VAR14,
              &VAR28);
        break;
      case VAR47:
        FUN12(!VAR14->VAR31);
        FUN10(VAR1::FUN11(),
                          VAR6.FUN22(
                              VAR4.VAR48),
                          *VAR14,
                          &VAR28);
        break;
      case VAR49:
        FUN12(!VAR14->VAR31);
        FUN10(
            VAR36, VAR17::FUN23(VAR4.VAR50), *VAR14, &VAR28);
        break;
      case VAR51:
        FUN12(!VAR14->VAR31);
        FUN10(VAR1::FUN11(),
                          VAR6.FUN24(
                              VAR52 == VAR53),
                          *VAR14,
                          &VAR28);
        break;
      case VAR54:
        if (VAR4.VAR55.VAR56 >= 0) {
          FUN10(
              VAR36,
              VAR17::FUN23(
                  VAR4.VAR55.VAR56),
              *VAR14,
              &VAR28);
        }
        break;
      case VAR57: {
        FUN12(!VAR14->VAR31);
        VAR1::string VAR58;
        const VAR3::VAR59& VAR60 =
            VAR4.VAR55;
        if (VAR60.VAR61 != VAR1::VAR41::VAR21) {
          VAR58.FUN25(VAR36 +
                              VAR17::FUN26(VAR60.VAR61) + VAR36);
        }
        if (VAR60.VAR62 != VAR1::VAR41::VAR21) {
          VAR58.FUN25(VAR36 +
                              VAR17::FUN26(VAR60.VAR62) + VAR36);
        }
        if (!VAR60.VAR63.FUN2())
          VAR58.FUN25(VAR36 + VAR60.VAR63 + VAR36);
        if (!VAR60.VAR64.FUN2())
          VAR58.FUN25(VAR36 + VAR60.VAR64 + VAR36);
        if (!VAR60.VAR65.FUN2())
          VAR58.FUN25(VAR36 + VAR60.VAR65 + VAR36);
        if (!VAR60.VAR66.FUN2()) {
          VAR58.FUN25(VAR36 + VAR60.VAR66 + VAR36);
        }
         VAR58.FUN25(VAR36 +
                            VAR17::FUN23(VAR60.VAR67));
         FUN10(VAR1::FUN11(), VAR58, *VAR14, &VAR28);
         break;
      }
      case VAR68:
        FUN12(!VAR14->VAR31);
        if (VAR4.VAR69 >= 0 ||
            !VAR4.VAR32.FUN2()) {
          FUN10(
              VAR36, VAR17::FUN27(VAR26), *VAR14, &VAR28);
        }
        break;
      case VAR70:
        if (VAR4.VAR71 !=
            VAR72::VAR73::VAR74) {
          FUN10(
              VAR36, VAR17::FUN23(VAR4.VAR71),
              *VAR14, &VAR28);
        }
        break;
      case VAR75: {
        const VAR1::VAR41& VAR76 = VAR4.VAR77;
        const VAR1::VAR41& VAR15 = VAR4.VAR78;
        if (!VAR76.FUN2() && !VAR15.FUN2()) {
          FUN10(
              VAR1::FUN11(), VAR36 + VAR76 + VAR36 + VAR15 + VAR36, *VAR14, &VAR28);
        }
        break;
      }
      case VAR79: {
        FUN12(!VAR14->VAR31);
        VAR17::string16 VAR80 = VAR6.FUN28(
            VAR4.VAR81);
        if (!VAR80.FUN2()) {
          FUN10(VAR36, VAR17::FUN27(VAR80), *VAR14, &VAR28);
        }
        break;
      }
      case VAR82: {
        FUN12(!VAR14->VAR31);
        VAR1::string VAR83 = VAR6.FUN29();
        if (!VAR83.FUN2())
          FUN10(VAR36, VAR83, *VAR14, &VAR28);
        break;
      }
      case VAR84:
        break;
      case VAR85:
        FUN10(VAR36, VAR36, *VAR14, &VAR28);
        break;
      case VAR86: {
        VAR1::string VAR87 = VAR4.VAR88;
        if (!VAR87.FUN2())
          FUN10(VAR36, VAR87, *VAR14, &VAR28);
        break;
      }
      case VAR89:
        FUN10(
            VAR1::FUN11(), VAR6.FUN30(), *VAR14, &VAR28);
        break;
      case VAR90:
        FUN10(
            VAR1::FUN11(), VAR6.FUN31(), *VAR14,
            &VAR28);
        break;
      case VAR91: {
        VAR1::string VAR92;
        VAR17::FUN32(VAR4.VAR93,
                              VAR24.FUN33(),
                              VAR17::VAR94::VAR95,
                              &VAR92);
        FUN10(VAR1::FUN11(), VAR92, *VAR14, &VAR28);
        break;
      }
      case VAR96:
        FUN10(
            VAR1::FUN11(), VAR6.FUN34(), *VAR14, &VAR28);
        break;
      case VAR16:
        FUN10(
            VAR1::FUN11(), VAR17::FUN27(VAR25), *VAR14, &VAR28);
        break;
      case VAR97:
        FUN10(
            VAR1::FUN11(), VAR4.VAR98, *VAR14, &VAR28);
        VAR10[VAR14->VAR23].VAR99 = VAR36;
        break;
      case VAR100:
        if (VAR4.VAR101.FUN35()) {
          FUN10(
              VAR1::FUN11(), VAR4.VAR101.FUN36(), *VAR14, &VAR28);
        }
        break;
      case VAR102:
        if (!VAR4.VAR103.FUN37()) {
          FUN10(
              VAR1::FUN11(),
              VAR17::FUN23(VAR4.VAR103.FUN38()),
              *VAR14, &VAR28);
        }
        break;
      case VAR104:
        if (!VAR4.VAR103.FUN37()) {
          FUN10(
              VAR1::FUN11(),
              VAR17::FUN23(VAR4.VAR103.FUN39()),
              *VAR14, &VAR28);
        }
        break;
      case VAR105:
        FUN10(
            VAR1::FUN11(), VAR6.FUN40(), *VAR14,
            &VAR28);
        break;
      case VAR106:
#if FUN41(VAR107)
        FUN10(VAR36, VAR6.FUN34(), *VAR14,
                          &VAR28);
#VAR108
        break;
      default:
        FUN42();
        break;
    }
  }
  if (!VAR10.FUN2())
    FUN3(VAR10, VAR8);
  return VAR28;
}