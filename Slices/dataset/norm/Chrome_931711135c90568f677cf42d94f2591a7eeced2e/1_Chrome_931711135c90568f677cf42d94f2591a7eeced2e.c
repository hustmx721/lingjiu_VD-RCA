void VAR1::open(VAR1* VAR2,
                    VAR3& VAR4) {
  if (FUN1()) {
    VAR4.FUN2(
        VAR5, VAR6);
    return;
  }
  if (!FUN3()) {
    VAR4.FUN2(VAR5,
                                      VAR6);
    return;
  }
  if (VAR7) {
    VAR4.FUN2(
        VAR5,
        VAR6);
    return;
  }
  if (VAR2) {
    if (!FUN4()->FUN5(
            VAR2->FUN4())) {
      VAR4.FUN6(
          VAR6);
      return;
    }
    FUN7(VAR2->FUN4());
    if (this != VAR2) {
       KURL VAR8 = VAR2->FUN8();
       VAR8.FUN9(FUN10());
       FUN11(VAR8);
     }
     VAR9 = VAR2->FUN12();
  }
  open();
}