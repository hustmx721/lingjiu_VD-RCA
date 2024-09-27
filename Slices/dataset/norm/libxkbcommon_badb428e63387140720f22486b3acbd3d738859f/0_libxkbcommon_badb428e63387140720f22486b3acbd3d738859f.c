FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6;
    unsigned VAR7, VAR8;
    struct VAR9 *VAR10;
    VAR8 = 0;
    FUN2(VAR6, VAR4->VAR11) {
        if (!FUN3(VAR2, VAR6->VAR12, false)) {
            FUN4(VAR4->VAR13, 5,
                    VAR14,
                    FUN5(VAR4->VAR13, VAR6->VAR6),
                    FUN5(VAR4->VAR13, VAR6->VAR12));
            VAR6->VAR12 = VAR15;
            continue;
        }
        if (FUN3(VAR2, VAR6->VAR6, false)) {
            FUN4(VAR4->VAR13, 5,
                    VAR14
                    VAR14%VAR16 = %VAR16\VAR14,
                    FUN5(VAR4->VAR13, VAR6->VAR6),
                    FUN5(VAR4->VAR13, VAR6->VAR12));
            VAR6->VAR12 = VAR15;
            continue;
        }
        VAR8++;
    }
    VAR10 = NULL;
    if (VAR8 > 0) {
         VAR10 = calloc(VAR8, sizeof(*VAR10));
         if (!VAR10)
             return false;
        VAR7 = 0;
        FUN2(VAR6, VAR4->VAR11) {
            if (VAR6->VAR12 != VAR15) {
                VAR10[VAR7].VAR6 = VAR6->VAR6;
                VAR10[VAR7].VAR12 = VAR6->VAR12;
                VAR7++;
            }
         }
     }
    VAR2->VAR8 = VAR8;
    VAR2->VAR10 = VAR10;
    return true;
}