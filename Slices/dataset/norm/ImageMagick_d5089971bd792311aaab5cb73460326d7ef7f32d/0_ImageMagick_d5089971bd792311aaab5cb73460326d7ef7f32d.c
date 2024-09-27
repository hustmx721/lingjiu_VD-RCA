MagickExport VAR1 *FUN1(const VAR1 *VAR2,const ComplexOperator VAR3,
  VAR4 *VAR5)
{
#define ComplexImageTag  VAR6
  VAR7
    *VAR8,
    *VAR9,
    *VAR10,
    *VAR11,
    *VAR12,
    *VAR13;
  const char
    *VAR14;
  const VAR1
    *VAR15,
    *VAR16,
    *VAR17,
    *VAR18;
  double
    VAR19;
  VAR1
    *VAR20,
    *VAR21,
    *VAR22,
    *VAR23;
  VAR24
    VAR25;
   VAR26
     VAR27;
  VAR28
    VAR29;
   VAR30
     VAR31;
  assert(VAR2 != (VAR1 *) NULL);
  assert(VAR2->VAR32 == VAR33);
  if (VAR2->VAR34 != VAR35)
    (void) FUN2(VAR36,FUN3(),VAR6,VAR2->VAR37);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR32 == VAR33);
  if (VAR2->VAR38 == (VAR1 *) NULL)
    {
      (void) FUN4(VAR5,FUN3(),VAR39,
        VAR6,VAR6,VAR2->VAR37);
      return((VAR1 *) NULL);
    }
  VAR23=FUN5(VAR2,0,0,VAR40,VAR5);
  if (VAR23 == (VAR1 *) NULL)
    return((VAR1 *) NULL);
  if (FUN6(VAR23,VAR41,VAR5) == VAR35)
    {
      VAR23=FUN7(VAR23);
      return(VAR23);
    }
  VAR23->VAR42=32UL;
  VAR21=FUN8();
  FUN9(&VAR21,VAR23);
  VAR23=FUN5(VAR2,0,0,VAR40,VAR5);
  if (VAR23 == (VAR1 *) NULL)
    {
      VAR21=FUN7(VAR21);
      return(VAR21);
    }
  FUN9(&VAR21,VAR23);
  VAR14=FUN10(VAR23,VAR6);
  VAR19=0.0;
  if (VAR14 != (const char *) NULL)
    VAR19=FUN11(VAR14,(char **) NULL);
  VAR16=VAR2;
  VAR15=VAR2->VAR38;
  VAR18=VAR2;
  VAR17=VAR2->VAR38;
  if ((VAR2->VAR38->VAR38 != (VAR1 *) NULL) &&
      (VAR2->VAR38->VAR38->VAR38 != (VAR1 *) NULL))
    {
      VAR18=VAR2->VAR38->VAR38;
      VAR17=VAR2->VAR38->VAR38->VAR38;
     }
   VAR22=VAR21;
   VAR20=VAR21->VAR38;
  VAR29=FUN12(FUN12(FUN12(
    VAR16->VAR29,VAR15->VAR29),FUN12(
    VAR18->VAR29,VAR17->VAR29)),FUN12(
    VAR22->VAR29,VAR20->VAR29));
   VAR9=FUN13(VAR16,VAR5);
   VAR8=FUN13(VAR15,VAR5);
   VAR11=FUN13(VAR18,VAR5);
  VAR10=FUN13(VAR17,VAR5);
  VAR13=FUN14(VAR22,VAR5);
  VAR12=FUN14(VAR20,VAR5);
  VAR25=VAR40;
  VAR27=0;
#if FUN15(VAR43)
  #pragma omp parallel for FUN16(static) FUN17(VAR27,VAR25) \
    FUN18(VAR22,VAR21,VAR22->VAR44,1L)
#VAR45
  for (VAR31=0; VAR31 < (VAR30) VAR22->VAR44; VAR31++)
  {
    register const VAR46
      *magick_restrict VAR47,
      *magick_restrict VAR48,
      *magick_restrict VAR49,
      *magick_restrict VAR50;
    register VAR46
      *magick_restrict VAR51,
      *magick_restrict VAR52;
    register VAR30
      VAR53;
    if (VAR25 == VAR35)
      continue;
    VAR48=FUN19(VAR9,0,VAR31,VAR22->VAR54,1,VAR5);
    VAR47=FUN19(VAR8,0,VAR31,VAR22->VAR54,1,VAR5);
    VAR50=FUN19(VAR11,0,VAR31,VAR22->VAR54,1,VAR5);
    VAR49=FUN19(VAR10,0,VAR31,VAR22->VAR54,1,VAR5);
    VAR52=FUN20(VAR13,0,VAR31,VAR22->VAR54,1,VAR5);
    VAR51=FUN20(VAR12,0,VAR31,VAR20->VAR54,1,VAR5);
    if ((VAR48 == (const VAR46 *) NULL) || (VAR47 == (const VAR46 *) NULL) ||
        (VAR50 == (const VAR46 *) NULL) || (VAR49 == (const VAR46 *) NULL) ||
        (VAR52 == (VAR46 *) NULL) || (VAR51 == (VAR46 *) NULL))
      {
        VAR25=VAR35;
        continue;
      }
    for (VAR53=0; VAR53 < (VAR30) VAR22->VAR54; VAR53++)
    {
       register VAR30
         VAR55;
      for (VAR55=0; VAR55 < (VAR30) VAR29; VAR55++)
       {
         switch (VAR3)
         {
          case VAR56:
          {
            VAR52[VAR55]=VAR48[VAR55]+VAR50[VAR55];
            VAR51[VAR55]=VAR47[VAR55]+VAR49[VAR55];
            break;
          }
          case VAR57:
          default:
          {
            VAR52[VAR55]=VAR48[VAR55];
            VAR51[VAR55]=(-VAR49[VAR55]);
            break;
          }
          case VAR58:
          {
            double
              VAR59;
            VAR59=FUN21((double) VAR50[VAR55]*VAR50[VAR55]+VAR49[VAR55]*VAR49[VAR55]+VAR19);
            VAR52[VAR55]=VAR59*((double) VAR48[VAR55]*VAR50[VAR55]+(double) VAR47[VAR55]*VAR49[VAR55]);
            VAR51[VAR55]=VAR59*((double) VAR47[VAR55]*VAR50[VAR55]-(double) VAR48[VAR55]*VAR49[VAR55]);
            break;
          }
          case VAR60:
          {
            VAR52[VAR55]=FUN22((double) VAR48[VAR55]*VAR48[VAR55]+(double) VAR47[VAR55]*VAR47[VAR55]);
            VAR51[VAR55]=FUN23((double) VAR47[VAR55],(double) VAR48[VAR55])/(2.0*VAR61)+0.5;
            break;
          }
          case VAR62:
          {
            VAR52[VAR55]=VAR63*((double) VAR48[VAR55]*VAR50[VAR55]-(double) VAR47[VAR55]*VAR49[VAR55]);
            VAR51[VAR55]=VAR63*((double) VAR47[VAR55]*VAR50[VAR55]+(double) VAR48[VAR55]*VAR49[VAR55]);
            break;
          }
          case VAR64:
          {
            VAR52[VAR55]=VAR48[VAR55]*FUN24(2.0*VAR61*(VAR47[VAR55]-0.5));
            VAR51[VAR55]=VAR48[VAR55]*FUN25(2.0*VAR61*(VAR47[VAR55]-0.5));
            break;
          }
          case VAR65:
          {
            VAR52[VAR55]=VAR48[VAR55]-VAR50[VAR55];
            VAR51[VAR55]=VAR47[VAR55]-VAR49[VAR55];
            break;
          }
        }
      }
      VAR48+=FUN26(VAR16);
      VAR47+=FUN26(VAR15);
      VAR50+=FUN26(VAR18);
      VAR49+=FUN26(VAR17);
      VAR52+=FUN26(VAR22);
      VAR51+=FUN26(VAR20);
    }
    if (FUN27(VAR12,VAR5) == VAR35)
      VAR25=VAR35;
    if (FUN27(VAR13,VAR5) == VAR35)
      VAR25=VAR35;
    if (VAR2->VAR66 != (VAR67) NULL)
      {
        VAR24
          VAR68;
#if FUN15(VAR43)
        #pragma omp VAR69
#VAR45
        VAR27++;
        VAR68=FUN28(VAR2,VAR70,VAR27,VAR2->VAR44);
        if (VAR68 == VAR35)
          VAR25=VAR35;
      }
  }
  VAR13=FUN29(VAR13);
  VAR12=FUN29(VAR12);
  VAR11=FUN29(VAR11);
  VAR10=FUN29(VAR10);
  VAR9=FUN29(VAR9);
  VAR8=FUN29(VAR8);
  if (VAR25 == VAR35)
    VAR21=FUN7(VAR21);
  return(VAR21);
}