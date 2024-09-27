GURL VAR1::FUN1(const VAR2& VAR3,
                                      const VAR2& VAR4) {
  FilePath VAR5;
  if (!VAR3.FUN2()) {
    VAR6::FUN3(&VAR5);
    VAR6::FUN4(VAR3);
  }
  VAR2::StringType VAR7;
   FUN5(VAR4, &VAR7);
   bool VAR8 = true;
  VAR9 FUN6(VAR7);
  if (VAR10.FUN7() && VAR10.FUN8())
    VAR8 = false;
   FilePath VAR11;
  if (VAR8 && !FUN9(VAR7, &VAR11)) {
#if FUN10(VAR12)
    VAR13::wstring VAR14 = FUN11(FUN12(
        FUN13(VAR7),
        VAR15::VAR16 | VAR15::VAR17));
#VAR18 FUN10(VAR19)
    VAR13::string VAR14 = FUN12(
        VAR7,
        VAR15::VAR16 | VAR15::VAR17);
#VAR20
    if (!FUN9(VAR14, &VAR11))
      VAR8 = false;
  }
  if (!VAR3.FUN2())
    VAR6::FUN4(VAR5);
  if (VAR8) {
    GURL VAR21 = VAR22::FUN14(VAR11);
    if (VAR21.FUN7())
      return FUN15(FUN16(VAR22::FUN17(VAR21, VAR13::FUN18(),
          VAR22::VAR23, VAR15::VAR24, NULL,
          NULL, NULL)));
  }
#if FUN10(VAR12)
  VAR13::string VAR25 = FUN13(VAR4.FUN19());
#VAR18 FUN10(VAR19)
  VAR13::string VAR25 = VAR4.FUN19();
#VAR20
  return FUN20(VAR25, VAR13::FUN18());
}