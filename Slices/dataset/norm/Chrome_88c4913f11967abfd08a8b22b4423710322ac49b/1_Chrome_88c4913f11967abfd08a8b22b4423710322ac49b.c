    static void FUN1(void* VAR1)
     {
         FUN2(FUN3());
         VAR2::FUN4();
         VAR3* VAR4 = static_cast<VAR3*>(VAR1);
         FUN2(VAR4);
         VAR4->VAR5.FUN5();
    }