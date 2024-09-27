bool VAR1::FUN1(VAR2* VAR3,
                                        VAR4::VAR5* VAR6) {
  VAR7::wstring VAR8 = VAR3->
      FUN2(VAR9::VAR10);
  FilePath VAR11;
  if (!VAR12::FUN3(VAR13::VAR14, &VAR11))
    return false;
  VAR15 FUN4(VAR8);
  if (VAR16.FUN5() != VAR11.FUN5())
    return false;
  if (VAR17::VAR18::FUN6() <= VAR17::VAR18::VAR19 ||
      VAR2::FUN7()->FUN8(
          VAR9::VAR20)) {
     return false;
   }
  if (VAR6->FUN9(VAR4::VAR5::VAR21,
                      VAR4::VAR5::VAR22,
                      VAR23) != VAR4::VAR24) {
    FUN10();
    return false;
  }
   if (VAR6->FUN9(VAR4::VAR5::VAR25,
                       VAR4::VAR5::VAR26,
                      VAR23) != VAR4::VAR24) {
    FUN10();
    return false;
  }
  if (FUN11(VAR16, VAR3)) {
    VAR6->FUN12(VAR4::VAR27, 0);
    VAR6->FUN13(VAR4::VAR28,
                          VAR4::VAR29);
    if (VAR17::VAR18::FUN6() == VAR17::VAR18::VAR30) {
      ::ChangeWindowMessageFilter(VAR31, VAR32);
      ::ChangeWindowMessageFilter(VAR33, VAR32);
    }
    VAR6->FUN14(VAR4::VAR34);
  } else {
    FUN15(VAR35) << VAR36;
    VAR6->FUN12(VAR4::VAR27, 0);
    VAR6->FUN13(
        VAR4::VAR37, VAR4::VAR37);
  }
  return true;
}