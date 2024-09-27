 void VAR1::FUN1(
     VAR2::Result VAR3) {
   if (VAR3 == VAR2::VAR4::VAR5) {
    FUN2(VAR6::VAR7, VAR8);
     return;
   }
  if (VAR3 == VAR2::VAR4::VAR9 ||
      !FUN3()) {
    FUN2(VAR6::VAR9, VAR10::FUN4());
    return;
  }
  FUN5(VAR3 == VAR2::VAR4::VAR11);
  VAR10::VAR12<VAR13::VAR14> VAR15 = FUN6();
  VAR16* VAR17 =
      VAR18::FUN7(VAR19)->FUN8();
  const VAR20* VAR21 =
      VAR17->FUN9(VAR22, true );
  if (VAR21) {
    VAR10::string VAR23;
    VAR6::Result VAR24 = VAR6::VAR25;
    bool VAR26 = true;
     if (VAR27::FUN7(VAR19)->FUN10(VAR22)) {
       VAR24 = VAR6::VAR28;
      VAR23 = VAR29;
     } else if (!VAR17->FUN11(VAR22)) {
      VAR17->FUN12(VAR22);
    }
    if (VAR26) {
      FUN2(VAR24, VAR23);
      return;
    }
  }
  VAR30<VAR13> VAR31 =
      new FUN13(VAR19, this, FUN14(), VAR22,
                            VAR10::move(VAR15), VAR32);
  VAR31->FUN15();
}