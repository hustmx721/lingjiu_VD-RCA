void VAR1::FUN1(long& VAR2, long long VAR3) const {
  assert(VAR4 == 0);
   if (VAR5 >= VAR2) {
     const long VAR6 = (VAR2 <= 0) ? 2048 : 2 * VAR2;
    VAR7** const VAR8 = new VAR7* [VAR6];
     VAR7** VAR9 = VAR8;
     VAR7** VAR10 = VAR11;
 VAR7** const VAR12 = VAR10 + VAR5;
 while (VAR10 != VAR12)
 *VAR9++ = *VAR10++;
 delete[] VAR11;
    VAR11 = VAR8;
     VAR2 = VAR6;
   }
  VAR7* const VAR13 = new FUN2(VAR5, VAR3);
   VAR11[VAR5++] = VAR13;
 }