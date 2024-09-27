void VAR1::FUN1(long& VAR2, long long VAR3) const {
bool VAR1::FUN1(long& VAR2, long long VAR3) const {
  if (VAR4 != 0)
    return false;
   if (VAR5 >= VAR2) {
     const long VAR6 = (VAR2 <= 0) ? 2048 : 2 * VAR2;
    VAR7** const VAR8 = new (VAR9::VAR10) VAR7*[VAR6];
    if (VAR8 == NULL)
      return false;
     VAR7** VAR11 = VAR8;
     VAR7** VAR12 = VAR13;
 VAR7** const VAR14 = VAR12 + VAR5;
 while (VAR12 != VAR14)
 *VAR11++ = *VAR12++;
 delete[] VAR13;
    VAR13 = VAR8;
     VAR2 = VAR6;
   }
  VAR7* const VAR15 = new (VAR9::VAR10) FUN2(VAR5, VAR3);
  if (VAR15 == NULL)
    return false;
   VAR13[VAR5++] = VAR15;
  return true;
 }