 FUN1 (VAR1           *VAR2,
                        GIOCondition          VAR3,
                        VAR4 *VAR5)
 {
        IceListenObj    VAR6;
         IceConn         VAR7;
         IceAcceptStatus VAR8;
        VAR9      *VAR10;
        VAR11  *VAR12;
        VAR6 = VAR5->VAR6;
        VAR12 = VAR5->VAR12;
         FUN2 (VAR13);
        VAR7 = FUN3 (VAR6, &VAR8);
         if (VAR8 != VAR14) {
                 FUN2 (VAR13, VAR8);
                 return VAR15;
         }
        VAR10 = FUN4 (VAR7);
        VAR7->VAR16 = VAR10;
        FUN5 (VAR12->VAR17->VAR18, FUN6 (VAR10), FUN7 (VAR10));
        FUN8 (VAR10);
         return VAR15;
 }