static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6;
  VAR7
    *VAR8;
  VAR9
    VAR10;
  VAR11
    VAR12;
  VAR13
    VAR14;
  VAR15
    VAR16,
    VAR17;
  unsigned char
    *VAR18;
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR19 == VAR20);
  if (VAR3->VAR21 != VAR22)
    (void) FUN2(VAR23,FUN3(),VAR24,
      VAR3->VAR25);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR19 == VAR20);
  VAR6=FUN4(VAR3);
  VAR12=FUN5(VAR3,VAR6,VAR26,VAR5);
  if (VAR12 == VAR22)
    {
      VAR6=FUN6(VAR6);
      return((VAR1 *) NULL);
    }
  VAR6->VAR27=1;
  VAR6->VAR28=VAR29;
  (void) FUN7(VAR6);
  VAR6->VAR30=(VAR13) FUN7(VAR6);
  (void) FUN7(VAR6);
  VAR6->VAR31=(VAR13) FUN7(VAR6);
  if ((VAR6->VAR30 == 0) || (VAR6->VAR31 == 0))
    FUN8(VAR32,VAR24);
  if (FUN9(VAR6,2) == VAR22)
    FUN8(VAR33,VAR24);
  if (VAR3->VAR34 != VAR22)
    {
       (void) FUN10(VAR6);
       return(FUN11(VAR6));
     }
  VAR12=FUN12(VAR6,VAR6->VAR30,VAR6->VAR31);
  if (VAR12 == VAR22)
    {
      FUN13(VAR5,&VAR6->VAR5);
      return(FUN6(VAR6));
    }
  FUN14(VAR6,VAR35);
  VAR10=VAR36;
  VAR8=FUN15(VAR3,VAR6);
  if (VAR8 == (VAR7 *) NULL)
    FUN8(VAR33,VAR24);
  VAR18=FUN16(VAR8);
  VAR14=FUN17(VAR6,VAR8,VAR10);
  for (VAR17=0; VAR17 < (VAR15) VAR6->VAR31; VAR17++)
  {
    register VAR37
      *restrict VAR38;
    VAR38=FUN18(VAR6,0,VAR17,VAR6->VAR30,1,VAR5);
    if (VAR38 == (VAR37 *) NULL)
      break;
    VAR16=FUN19(VAR6,VAR14,VAR18);
    if (VAR16 != (VAR15) VAR14)
      FUN8(VAR32,VAR24);
    (void) FUN20(VAR6,(VAR39 *) NULL,VAR8,
      VAR10,VAR18,VAR5);
    VAR16=FUN19(VAR6,(VAR13) (-(VAR15) VAR14) & 0x01,VAR18);
    if (FUN21(VAR6,VAR5) == VAR22)
      break;
    VAR12=FUN22(VAR6,VAR40,(VAR41) VAR17,
      VAR6->VAR31);
    if (VAR12 == VAR22)
      break;
  }
  FUN23(VAR6,VAR10);
  VAR8=FUN24(VAR8);
  if (FUN25(VAR6) != VAR22)
    FUN26(VAR5,VAR32,VAR24,
      VAR6->VAR25);
  (void) FUN10(VAR6);
  return(FUN11(VAR6));
}