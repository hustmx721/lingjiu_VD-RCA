void VAR1::FUN1(
    const VAR2& VAR3,
    const VAR4& VAR5,
    GDataErrorCode VAR6,
    VAR7<VAR8::VAR9> VAR10) {
  FUN2(VAR11::FUN3(VAR11::VAR12));
  FUN2(!VAR5.FUN4());
  GDataFileError VAR13 = VAR14::FUN5(VAR6);
  if (VAR13 != VAR15) {
    VAR5.FUN6(VAR13);
    return;
  }
  VAR7<VAR16> FUN7(VAR16::FUN8(*VAR10));
  if (!VAR17.FUN9()) {
    VAR5.FUN6(VAR18);
     return;
   }
  VAR19* VAR20 = VAR21->FUN10(VAR17.FUN9());
   if (!VAR20) {
     VAR5.FUN6(VAR18);
     return;
  }
  VAR21->FUN11()->FUN12(VAR20);
  FUN13(VAR3,
                             VAR5,
                             VAR15,
                             VAR20->FUN14());
}