static void FUN1(VAR1* VAR2, VAR3::VAR4<VAR3::VAR5> VAR6, VAR3::VAR4<VAR3::VAR7> VAR8)
{
    FUN2(!VAR8.FUN3());
    FUN2(VAR8->FUN4());
    VAR3::VAR4<VAR3::VAR5> VAR9 = VAR3::VAR4<VAR3::VAR5>::FUN5(VAR8);
    VAR3::VAR10* VAR11 = VAR2->FUN6();
    VAR3::VAR4<VAR3::VAR12> VAR13 = VAR2->FUN7();
    auto VAR14 = VAR15::FUN8(VAR11);
    if (VAR14.FUN9(VAR13, VAR9))
        return;
    VAR3::VAR16 FUN10(VAR11);
    VAR3::VAR4<VAR3::VAR7> VAR17;
     if (VAR6->FUN11(VAR2->FUN7(), FUN12(VAR11, VAR18)).FUN13(&VAR17) && VAR17->FUN14()) {
         VAR3::VAR16 FUN10(VAR11);
         VAR3::VAR4<VAR3::VAR7> VAR19;
        if (!VAR20::FUN15(VAR3::VAR4<VAR3::VAR21>::FUN5(VAR17), VAR8, 0, 0, VAR11).FUN13(&VAR19)) {
             fprintf(VAR22, VAR18);
             FUN16(VAR13, VAR23.FUN17());
             FUN18();
        }
    }
    if (VAR6->FUN19() != VAR9->FUN19()) {
        if (!FUN20(VAR6->FUN21(VAR13, VAR9->FUN19()))) {
            fprintf(VAR22, VAR18);
            FUN16(VAR13, VAR23.FUN17());
            FUN18();
        }
    }
    if (!FUN20(VAR9->FUN21(VAR13, VAR6))) {
        fprintf(VAR22, VAR18);
        FUN16(VAR13, VAR23.FUN17());
        FUN18();
    }
    VAR14.FUN22(VAR13, VAR9, FUN23(true, VAR11));
}