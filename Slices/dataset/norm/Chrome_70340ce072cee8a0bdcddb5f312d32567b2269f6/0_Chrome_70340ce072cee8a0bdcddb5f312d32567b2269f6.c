int VAR1::VAR2::FUN1(
     const VAR3& VAR4,
     VAR5* VAR6,
     int VAR7) {
  FUN2(VAR8);
   VAR9::VAR10::const_reverse_iterator VAR11;
   int VAR12;
  for (VAR11 = VAR4.FUN3(), VAR12 = 0; VAR11 != VAR4.FUN4() && VAR12 < VAR7; ++VAR11) {
    if ((*VAR11)->VAR13)
      FUN5(&VAR6[VAR12++], *VAR11);
  }
  return VAR12;
}