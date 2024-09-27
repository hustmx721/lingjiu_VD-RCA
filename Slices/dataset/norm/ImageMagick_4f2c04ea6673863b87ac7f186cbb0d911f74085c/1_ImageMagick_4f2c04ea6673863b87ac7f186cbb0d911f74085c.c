static void FUN1(VAR1 *VAR2)
{
  register const unsigned char
    *VAR3;
  VAR4
    VAR5;
  unsigned char
    *VAR6;
  unsigned int
    VAR7,
    VAR8;
  unsigned short
    VAR9,
    VAR10;
  VAR5=FUN2(VAR2);
  if (VAR5 < 16)
    return;
  VAR6=FUN3(VAR2);
  for (VAR3=VAR6; (VAR3 >= VAR6) && (VAR3 < (VAR6+VAR5-16)); )
  {
     register unsigned char
       *VAR11;
     VAR11=(unsigned char *) VAR3;
     if (FUN4((const char *) VAR3,VAR12,4) != 0)
      break;
     VAR3=FUN5(VAR13,VAR3,&VAR8);
     VAR3=FUN6(VAR13,VAR3,&VAR9);
     VAR3=FUN6(VAR13,VAR3,&VAR10);
     VAR3=FUN5(VAR13,VAR3,&VAR7);
    if ((VAR9 == 0x000003ed) && (FUN7(VAR7) < (VAR14) (VAR5-12)))
       {
        (void) FUN8(VAR11,VAR11+FUN7(VAR7)+12,VAR5-
          (FUN7(VAR7)+12)-(VAR11-VAR6));
        FUN9(VAR2,VAR5-(FUN7(VAR7)+12));
         break;
       }
     VAR3+=VAR7;
    if ((VAR7 & 0x01) != 0)
      VAR3++;
   }
 }