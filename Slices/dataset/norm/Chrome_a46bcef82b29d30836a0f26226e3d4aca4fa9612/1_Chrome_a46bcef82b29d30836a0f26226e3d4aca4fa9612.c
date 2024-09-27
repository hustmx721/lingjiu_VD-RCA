  virtual void FUN1() {
     VAR1 = VAR2;
    VAR3.FUN2(1000, 1000);
    FUN3(VAR4, FUN4())
        .FUN5(FUN6(VAR3));
    VAR5::VAR6* VAR7 = new FUN7();
    FUN3(*VAR7, FUN8()).FUN5(FUN6(VAR1));
    FUN3(*VAR7, FUN9(VAR8));
    VAR9 = new FUN10(
        &VAR10,
        new VAR5::FUN11(
            VAR11::VAR12::FUN12(), VAR7),
         &VAR13, &VAR4);
   }