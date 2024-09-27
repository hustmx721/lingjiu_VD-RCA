LayoutUnit VAR1::FUN1(LayoutUnit VAR2, VAR3& VAR4, bool VAR5)
{
    VAR1* VAR6 = VAR4.FUN2() ? FUN3(&VAR4) : 0;
    LayoutUnit VAR7 = FUN4(VAR4, VAR2);
    LayoutUnit VAR8 = VAR7;
    LayoutUnit VAR9 = FUN5(VAR4, VAR7);
    LayoutUnit VAR10 = 0;
    LayoutUnit VAR11 = VAR9 - VAR8;
    LayoutUnit VAR12 = VAR4.FUN6();
    if (VAR11) {
        FUN7(VAR7, VAR12 - VAR11);
        VAR10 = VAR11;
    } else if (VAR6 && VAR6->FUN8()) {
        VAR10 = VAR6->FUN8();
    }
     if (VAR10) {
        if (VAR5 && VAR2 == VAR7 && FUN9()) {
            VAR10 += VAR2;
            if (FUN10())
                VAR10 += FUN11();
            FUN12(VAR10);
            if (VAR6)
                VAR6->FUN12(0);
        } else {
            VAR7 += VAR10;
        }
    }
    if (!VAR11) {
        if (LayoutUnit VAR13 = FUN13(VAR7)) {
            LayoutUnit VAR14 = FUN14(VAR7, VAR15);
            LayoutUnit VAR16 = VAR12 - VAR14;
            if (VAR16 > 0) {
                LayoutUnit VAR17 = FUN15(VAR16, VAR13);
                FUN7(VAR7, VAR17 ? VAR17 : VAR16);
            } else if (VAR14 == VAR13 && FUN16() + VAR4.FUN17()) {
                FUN7(VAR7, VAR12);
            }
        }
    }
    FUN18(FUN6() + (VAR7 - VAR2));
    return VAR7;
}