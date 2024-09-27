int VAR1::VAR2::FUN1(
     const VAR3& VAR4,
     VAR5* VAR6,
     int VAR7) {
   VAR8::VAR9::const_reverse_iterator VAR10;
   int VAR11;
  for (VAR10 = VAR4.FUN2(), VAR11 = 0; VAR10 != VAR4.FUN3() && VAR11 < VAR7; ++VAR10) {
    if ((*VAR10)->VAR12)
      FUN4(&VAR6[VAR11++], *VAR10);
  }
  return VAR11;
}