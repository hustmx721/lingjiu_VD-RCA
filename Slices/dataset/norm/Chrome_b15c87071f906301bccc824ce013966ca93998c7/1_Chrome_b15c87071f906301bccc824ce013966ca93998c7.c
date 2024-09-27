void VAR1::FUN1() {
  VAR2 = new FUN2(
      VAR3.FUN3(),
       VAR4::FUN4(&VAR1::VAR5,
                  VAR4::FUN5(this)));
  VAR6 = VAR7;
   VAR8.FUN6(new FUN7());
   FUN8(*VAR8, FUN9(VAR9))
       .FUN10(FUN11())
       .FUN12(FUN13(false));
  FUN8(*VAR8, FUN14())
       .FUN10(FUN11())
      .FUN12(FUN15(&VAR6));
   FUN8(*VAR8, FUN16(VAR9))
       .FUN10(FUN11())
       .FUN12(FUN17(this, &VAR1::VAR10));
  FUN8(VAR11, FUN18(VAR9))
      .FUN10(FUN11())
      .FUN12(FUN13(false));
}