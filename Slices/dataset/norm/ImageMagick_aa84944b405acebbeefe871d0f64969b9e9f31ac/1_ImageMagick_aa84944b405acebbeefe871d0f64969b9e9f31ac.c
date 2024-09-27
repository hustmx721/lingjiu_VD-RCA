static VAR1 *FUN1(const VAR2 *VAR3,VAR4 *VAR5)
{
  VAR1
    *VAR6;
  VAR7
    VAR8,
    VAR9;
  VAR10
    *VAR11;
  char
    VAR12[VAR13];
  VAR14
    VAR15;
  assert(VAR3 != (const VAR2 *) NULL);
  assert(VAR3->VAR16 == VAR17);
  (void) FUN2(VAR18,FUN3(),VAR19,VAR3->VAR20);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR16 == VAR17);
  VAR8=FUN2(VAR21,FUN3(),VAR19);
  VAR6=FUN4(VAR3);
  VAR11=(VAR10 *) NULL;
  VAR9=FUN5(VAR3,VAR6,VAR22,VAR5);
  if (VAR9 == VAR23)
    return((VAR1 *) NULL);
  if (FUN6(VAR3->VAR24,VAR19) != 0)
    FUN7(VAR25,VAR19);
  VAR15=(VAR14) FUN8(VAR6,8,(unsigned char *) VAR12);
   if (VAR15 < 8 || memcmp(VAR12,VAR19,8) != 0)
     FUN7(VAR25,VAR19);
   VAR11=(VAR10 *) FUN9(sizeof(*VAR11));
  if (VAR11 == (VAR10 *) NULL)
    FUN7(VAR26,VAR19);
  (void) FUN10(VAR11,0,sizeof(VAR10));
  VAR11->VAR6=VAR6;
  VAR6=FUN11(VAR11,VAR3,VAR5);
  VAR11=FUN12(VAR11);
  if (VAR6 == (VAR1 *) NULL)
    {
      if (VAR8 != VAR23)
        (void) FUN2(VAR21,FUN3(),
          VAR19);
      return((VAR1 *) NULL);
    }
  (void) FUN13(VAR6);
  if (VAR6->VAR27 == 0 || VAR6->VAR28 == 0)
    {
      if (VAR8 != VAR23)
        (void) FUN2(VAR21,FUN3(),
          VAR19);
      FUN7(VAR25,VAR19);
    }
  if (VAR8 != VAR23)
    (void) FUN2(VAR21,FUN3(),VAR19);
  return(VAR6);
}