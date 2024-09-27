long VAR1::FUN1(long long VAR2, long long& VAR3,
 long& VAR4) {
 const long long VAR5 = VAR3;
 const long long VAR6 = VAR3 + VAR2;
 VAR7* const VAR8 = VAR9->VAR10;
 long long VAR11, VAR12;
 long VAR13 = VAR8->FUN2(&VAR11, &VAR12);
 if (VAR13 < 0)
 return VAR13;
  assert((VAR11 < 0) || (VAR12 <= VAR11));
 if ((VAR3 + 1) > VAR12) {
    VAR4 = 1;
 return VAR14;
 }
 long long VAR15 = FUN3(VAR8, VAR3, VAR4);
 if (VAR15 < 0)
 return static_cast<long>(VAR15);
 if (VAR15 > 0)
 return VAR14;
 if ((VAR3 + VAR4) > VAR6)
 return VAR16;
 if ((VAR3 + VAR4) > VAR12)
 return VAR14;
 const long long VAR17 = FUN4(VAR8, VAR3, VAR4);
 if (VAR17 < 0)
 return static_cast<long>(VAR17);
   if (VAR17 == 0)
     return VAR16;
#if 0
    const VAR18* const VAR19 = VAR9->FUN5();
    assert(VAR19);
    const long VAR20 = static_cast<long>(VAR17);
    const VAR21* const VAR22 = VAR19->FUN6(VAR20);
    if (VAR22 == NULL)
        return VAR16;
#VAR23
   VAR3 += VAR4;
   if ((VAR3 + 2) > VAR6)
 return VAR16;
 if ((VAR3 + 2) > VAR12) {
    VAR4 = 2;
 return VAR14;
 }
  VAR3 += 2;
 if ((VAR3 + 1) > VAR6)
 return VAR16;
 if ((VAR3 + 1) > VAR12) {
    VAR4 = 1;
 return VAR14;
 }
 unsigned char VAR24;
  VAR13 = VAR8->FUN7(VAR3, 1, &VAR24);
 if (VAR13 < 0) {
    VAR4 = 1;
 return VAR13;
 }
 ++VAR3;
  assert(VAR3 <= VAR12);
 if (VAR3 >= VAR6)
 return VAR16;
 const int VAR25 = int(VAR24 & 0x06) >> 1;
 if ((VAR25 != 0) && (VAR6 > VAR12)) {
    VAR4 = static_cast<long>(VAR6 - VAR3);
 return VAR14;
 }
  VAR13 = FUN8(0x23,
                       VAR5, VAR2,
 0);
 if (VAR13 != 0)
 return VAR13;
  VAR26 = VAR6;
 return 0;
}