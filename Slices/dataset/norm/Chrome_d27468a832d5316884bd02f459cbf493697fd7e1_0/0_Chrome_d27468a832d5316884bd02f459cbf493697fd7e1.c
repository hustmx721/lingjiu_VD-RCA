bool VAR1::FUN1() const {
  if (!FUN2() || !FUN3())
     return false;
   const VAR2& VAR3 = FUN4(VAR4);
  if (FUN5(VAR3, VAR5))
     return true;
   VAR6* VAR7 = FUN6().FUN7();
  if (FUN8() == VAR8 && VAR7 &&
      VAR7->FUN9() == this) {
    return true;
  }
  if (FUN10() && FUN11())
    return true;
  return false;
}