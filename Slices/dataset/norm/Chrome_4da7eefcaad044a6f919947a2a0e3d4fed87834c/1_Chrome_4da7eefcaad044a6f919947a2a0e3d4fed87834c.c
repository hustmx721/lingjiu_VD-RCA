     ~FUN1()
     {
         if (!--VAR1) {
#if FUN2(VAR2)
            delete VAR3;
            VAR3 = 0;
#VAR4 FUN2(VAR5)
             FUN3(VAR6, VAR3);
             FUN4(VAR6, VAR3);
#VAR7
         }
     }