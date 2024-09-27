VAR1::FUN1(
    size_t VAR2,
    VAR3<VAR4> VAR5,
    VAR6* VAR7,
    const char* VAR8)
    : FUN2(VAR5),
      FUN3(VAR7),
       FUN4(0),
       FUN5(0),
       FUN6(1),
      FUN7(new VAR9),
       FUN8(
           VAR8),
       FUN9(new FUN10()),
      FUN11(this) {
  FUN12(VAR5->FUN13());
  FUN14(VAR2, sizeof(VAR10) * VAR11)
      << VAR12;
  FUN15(VAR8,
                                     VAR12, this);
  for (size_t VAR13 = 0; VAR13 < VAR2; VAR13++) {
    VAR3<VAR14::VAR15> FUN16(FUN17(
        new VAR14::FUN18(this, VAR8)));
    VAR16.FUN19(VAR17);
  }
  VAR18::VAR19<const VAR20::VAR15*> VAR21;
  for (const auto& VAR17 : VAR16)
    VAR21.FUN19(&VAR17->FUN20());
  VAR22->FUN21(VAR21);
  VAR22->FUN22(this);
  VAR23 =
      VAR20::FUN23(&VAR1::VAR24, VAR25.FUN24(), true);
  VAR26 =
      VAR20::FUN23(&VAR1::VAR24, VAR25.FUN24(), false);
}