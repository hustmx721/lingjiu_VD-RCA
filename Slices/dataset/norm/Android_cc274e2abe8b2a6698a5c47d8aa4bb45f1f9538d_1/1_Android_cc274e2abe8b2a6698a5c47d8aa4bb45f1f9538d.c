long VAR1::FUN1(const VAR2* VAR3, const VAR2*& VAR4,
 long long& VAR5, long& VAR6) {
  assert(VAR3);
  assert(!VAR3->FUN2());
  assert(VAR7);
  VAR4 = 0;
 if (VAR3->VAR8 >= 0) {
    assert(VAR7[VAR3->VAR8] == VAR3);
 const long VAR9 = VAR3->VAR8 + 1;
 if (VAR9 < VAR10) {
      VAR4 = VAR7[VAR9];
 return 0;
 }
 const long VAR11 = FUN3(VAR5, VAR6);
 if (VAR11 < 0)
 return VAR11;
 if (VAR11 > 0)
 {
 return 1;
 }
    VAR4 = FUN4();
 return 0;
 }
  assert(VAR12 > 0);
 long long VAR13, VAR14;
 long VAR15 = VAR16->FUN5(&VAR13, &VAR14);
 if (VAR15 < 0)
 return VAR15;
  assert((VAR13 < 0) || (VAR14 <= VAR13));
 const long long VAR17 = (VAR18 < 0) ? -1 : VAR19 + VAR18;
  VAR5 = VAR3->VAR20;
 if (VAR3->VAR21 >= 0)
    VAR5 += VAR3->VAR21;
 else {
 if ((VAR5 + 1) > VAR14) {
      VAR6 = 1;
 return VAR22;
 }
 long long VAR11 = FUN6(VAR16, VAR5, VAR6);
 if (VAR11 < 0)
 return static_cast<long>(VAR11);
 if (VAR11 > 0)
 return VAR22;
 if ((VAR17 >= 0) && ((VAR5 + VAR6) > VAR17))
 return VAR23;
 if ((VAR5 + VAR6) > VAR14)
 return VAR22;
 const long long VAR24 = FUN7(VAR16, VAR5, VAR6);
 if (VAR24 != 0x0F43B675)
 return -1;
    VAR5 += VAR6;
 if ((VAR5 + 1) > VAR14) {
      VAR6 = 1;
 return VAR22;
 }
    VAR11 = FUN6(VAR16, VAR5, VAR6);
 if (VAR11 < 0)
 return static_cast<long>(VAR11);
 if (VAR11 > 0)
 return VAR22;
 if ((VAR17 >= 0) && ((VAR5 + VAR6) > VAR17))
 return VAR23;
 if ((VAR5 + VAR6) > VAR14)
 return VAR22;
 const long long VAR25 = FUN7(VAR16, VAR5, VAR6);
 if (VAR25 < 0)
 return static_cast<long>(VAR25);
    VAR5 += VAR6;
 const long long VAR26 = (1LL << (7 * VAR6)) - 1;
 if (VAR25 == VAR26)
 return VAR23;
 if ((VAR17 >= 0) && ((VAR5 + VAR25) > VAR17))
 return VAR23;
     VAR5 += VAR25;
    assert((VAR17 < 0) || (VAR5 <= VAR17));
 }
 for (;;) {
 const long VAR15 = FUN8(VAR4, VAR5, VAR6);
 if (VAR15 <= 1)
 return VAR15;
 }
}