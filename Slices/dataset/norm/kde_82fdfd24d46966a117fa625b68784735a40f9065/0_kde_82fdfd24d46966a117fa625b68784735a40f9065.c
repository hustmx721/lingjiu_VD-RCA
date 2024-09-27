void VAR1::FUN1(VAR2 *VAR3)
{
    if (!VAR3->FUN2()) {
        VAR4 *VAR5 = VAR6<VAR4*>(VAR3);
        FUN3(VAR5);
        VAR7 << VAR5->FUN4();
        const QString VAR8 = VAR5->FUN5();
        bool VAR9 = VAR10->FUN6() && !VAR10->FUN6()->FUN7();
        if (!VAR9) {
            VAR11::FUN8(VAR8, VAR12::VAR13 | VAR12::VAR14 | VAR12::VAR15);
        }
        if (VAR9) {
            VAR16 = new VAR17;
            connect(VAR16, &VAR17::VAR18, this, &VAR1::VAR19);
            VAR16->FUN9(VAR8);
        }
        if (VAR6<VAR20*>(VAR3)) {
            const VAR21<VAR22> VAR23 = {VAR22::FUN10(VAR8, FUN11(), VAR22::VAR24)};
            VAR25::FUN12(VAR23, FUN13());
         } else {
             VAR25::FUN14(VAR22::FUN10(VAR8, FUN11(), VAR22::VAR24),
                          FUN15().FUN16(VAR8).FUN17(),
                         FUN13(), false, false);
         }
     } else if (VAR3->FUN2() != VAR2::VAR26) {
         VAR27::FUN2(FUN13(), VAR3->FUN18());
    }
    FUN19();
}