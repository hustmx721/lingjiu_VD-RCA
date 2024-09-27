 FUN1 (VAR1           *VAR2,
                        GIOCondition          VAR3,
                        VAR4 *VAR5)
 {
         IceConn         VAR6;
         IceAcceptStatus VAR7;
         FUN2 (VAR8);
        VAR6 = FUN3 (VAR5->VAR9, &VAR7);
         if (VAR7 != VAR10) {
                 FUN2 (VAR8, VAR7);
                 return VAR11;
         }
        FUN4 (VAR6);
         return VAR11;
 }