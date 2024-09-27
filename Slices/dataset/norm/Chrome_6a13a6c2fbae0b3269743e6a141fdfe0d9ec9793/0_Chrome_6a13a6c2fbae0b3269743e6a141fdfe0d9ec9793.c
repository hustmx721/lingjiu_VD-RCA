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
   FUN4();
   VAR5 = VAR2;
  VAR3[VAR5]->FUN5(
      VAR6::FUN6(
          VAR3[VAR5]->FUN7() |
          VAR6::VAR7));
  FUN8(VAR8);
}