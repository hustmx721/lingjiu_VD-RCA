void VAR1::FUN1(int VAR2) {
  if (VAR2 < 0 || VAR2 >= static_cast<int>(VAR3.FUN2())) {
    FUN3();
    return;
  }
  if (VAR4 != -1) {
    if (VAR2 == VAR4) {
      return;
    }
    if (VAR2 > VAR4) {
      VAR2--;
     }
   }
  if (VAR5->FUN4()) {
    if (VAR2 == FUN5() - 1) {
      VAR5->FUN4()->FUN6();
      return;
    } else {
      VAR5->FUN4()->FUN7();
    }
  }
   FUN8();
   VAR6 = VAR2;
  VAR3[VAR6]->FUN9(
      VAR7::FUN10(
          VAR3[VAR6]->FUN11() |
          VAR7::VAR8));
  FUN12(VAR9);
}