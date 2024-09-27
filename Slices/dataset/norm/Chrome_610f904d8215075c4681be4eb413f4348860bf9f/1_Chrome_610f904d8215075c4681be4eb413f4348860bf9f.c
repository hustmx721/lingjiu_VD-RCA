int64 VAR1::FUN1(const VAR2::VAR3& VAR4) {
   VAR5::const_iterator VAR6 = VAR7.FUN2(VAR4);
   if (VAR6 == VAR7.FUN3())
     return 0;
  int64 VAR8 = 0;
  const VAR9& VAR10 = VAR6->VAR11;
  for (VAR9::const_iterator VAR12 = VAR10.FUN4();
       VAR12 != VAR10.FUN3(); ++VAR12) {
    VAR8 += VAR12->VAR11;
  }
  return VAR8;
}