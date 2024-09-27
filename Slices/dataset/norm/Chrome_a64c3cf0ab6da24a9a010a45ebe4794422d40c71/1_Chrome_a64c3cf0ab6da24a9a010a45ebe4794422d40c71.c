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
   FilePath VAR9;
  if (!FUN6(VAR7, &VAR9)) {
#if FUN7(VAR10)
    VAR11::wstring VAR12 = FUN8(FUN9(
        FUN10(VAR7),
        VAR13::VAR14 | VAR13::VAR15));
#VAR16 FUN7(VAR17)
    VAR11::string VAR12 = FUN9(
        VAR7,
        VAR13::VAR14 | VAR13::VAR15);
#VAR18
    if (!FUN6(VAR12, &VAR9))
      VAR8 = false;
  }
  if (!VAR3.FUN2())
    VAR6::FUN4(VAR5);
  if (VAR8) {
    GURL VAR19 = VAR20::FUN11(VAR9);
    if (VAR19.FUN12())
      return FUN13(FUN14(VAR20::FUN15(VAR19, VAR11::FUN16(),
          VAR20::VAR21, VAR13::VAR22, NULL,
          NULL, NULL)));
  }
#if FUN7(VAR10)
  VAR11::string VAR23 = FUN10(VAR4.FUN17());
#VAR16 FUN7(VAR17)
  VAR11::string VAR23 = VAR4.FUN17();
#VAR18
  return FUN18(VAR23, VAR11::FUN16());
}