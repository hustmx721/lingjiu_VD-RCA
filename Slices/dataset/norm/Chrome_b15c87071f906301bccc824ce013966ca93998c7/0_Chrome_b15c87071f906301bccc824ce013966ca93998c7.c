void VAR1::FUN1() {
  VAR2 = new FUN2(
      VAR3.FUN3(),
       VAR4::FUN4(&VAR1::VAR5,
                  VAR4::FUN5(this)));
   VAR6.FUN6(new FUN7());
   FUN8(*VAR6, FUN9(VAR7))
       .FUN10(FUN11())
       .FUN12(FUN13(false));
  FUN8(*VAR6, FUN14())
       .FUN10(FUN11())
      .FUN12(FUN15(&VAR8));
  FUN8(*VAR6, FUN16(VAR7))
      .FUN10(FUN11())
      .FUN12(FUN15(&VAR9));
   FUN8(*VAR6, FUN17(VAR7))
       .FUN10(FUN11())
       .FUN12(FUN18(this, &VAR1::VAR10));
  FUN8(VAR11, FUN19(VAR7))
      .FUN10(FUN11())
      .FUN12(FUN13(false));
}