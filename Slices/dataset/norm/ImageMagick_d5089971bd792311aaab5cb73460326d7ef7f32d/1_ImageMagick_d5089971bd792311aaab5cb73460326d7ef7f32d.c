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
  assert(VAR2 != (VAR1 *) NULL);
  assert(VAR2->VAR30 == VAR31);
  if (VAR2->VAR32 != VAR33)
    (void) FUN2(VAR34,FUN3(),VAR6,VAR2->VAR35);
  assert(VAR5 != (VAR4 *) NULL);
  assert(VAR5->VAR30 == VAR31);
  if (VAR2->VAR36 == (VAR1 *) NULL)
    {
      (void) FUN4(VAR5,FUN3(),VAR37,
        VAR6,VAR6,VAR2->VAR35);
      return((VAR1 *) NULL);
    }
  VAR23=FUN5(VAR2,0,0,VAR38,VAR5);
  if (VAR23 == (VAR1 *) NULL)
    return((VAR1 *) NULL);
  if (FUN6(VAR23,VAR39,VAR5) == VAR33)
    {
      VAR23=FUN7(VAR23);
      return(VAR23);
    }
  VAR23->VAR40=32UL;
  VAR21=FUN8();
  FUN9(&VAR21,VAR23);
  VAR23=FUN5(VAR2,0,0,VAR38,VAR5);
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
  VAR15=VAR2->VAR36;
  VAR18=VAR2;
  VAR17=VAR2->VAR36;
  if ((VAR2->VAR36->VAR36 != (VAR1 *) NULL) &&
      (VAR2->VAR36->VAR36->VAR36 != (VAR1 *) NULL))
    {
      VAR18=VAR2->VAR36->VAR36;
      VAR17=VAR2->VAR36->VAR36->VAR36;
     }
   VAR22=VAR21;
   VAR20=VAR21->VAR36;
   VAR9=FUN12(VAR16,VAR5);
   VAR8=FUN12(VAR15,VAR5);
   VAR11=FUN12(VAR18,VAR5);
  VAR10=FUN12(VAR17,VAR5);
  VAR13=FUN13(VAR22,VAR5);
  VAR12=FUN13(VAR20,VAR5);
  VAR25=VAR38;
  VAR27=0;
#if FUN14(VAR41)
  #pragma omp parallel for FUN15(static) FUN16(VAR27,VAR25) \
    FUN17(VAR22,VAR21,VAR22->VAR42,1L)
#VAR43
  for (VAR29=0; VAR29 < (VAR28) VAR22->VAR42; VAR29++)
  {
    register const VAR44
      *magick_restrict VAR45,
      *magick_restrict VAR46,
      *magick_restrict VAR47,
      *magick_restrict VAR48;
    register VAR44
      *magick_restrict VAR49,
      *magick_restrict VAR50;
    register VAR28
      VAR51;
    if (VAR25 == VAR33)
      continue;
    VAR46=FUN18(VAR9,0,VAR29,VAR22->VAR52,1,VAR5);
    VAR45=FUN18(VAR8,0,VAR29,VAR22->VAR52,1,VAR5);
    VAR48=FUN18(VAR11,0,VAR29,VAR22->VAR52,1,VAR5);
    VAR47=FUN18(VAR10,0,VAR29,VAR22->VAR52,1,VAR5);
    VAR50=FUN19(VAR13,0,VAR29,VAR22->VAR52,1,VAR5);
    VAR49=FUN19(VAR12,0,VAR29,VAR20->VAR52,1,VAR5);
    if ((VAR46 == (const VAR44 *) NULL) || (VAR45 == (const VAR44 *) NULL) ||
        (VAR48 == (const VAR44 *) NULL) || (VAR47 == (const VAR44 *) NULL) ||
        (VAR50 == (VAR44 *) NULL) || (VAR49 == (VAR44 *) NULL))
      {
        VAR25=VAR33;
        continue;
      }
    for (VAR51=0; VAR51 < (VAR28) VAR22->VAR52; VAR51++)
    {
       register VAR28
         VAR53;
      for (VAR53=0; VAR53 < (VAR28) FUN20(VAR22); VAR53++)
       {
         switch (VAR3)
         {
          case VAR54:
          {
            VAR50[VAR53]=VAR46[VAR53]+VAR48[VAR53];
            VAR49[VAR53]=VAR45[VAR53]+VAR47[VAR53];
            break;
          }
          case VAR55:
          default:
          {
            VAR50[VAR53]=VAR46[VAR53];
            VAR49[VAR53]=(-VAR47[VAR53]);
            break;
          }
          case VAR56:
          {
            double
              VAR57;
            VAR57=FUN21((double) VAR48[VAR53]*VAR48[VAR53]+VAR47[VAR53]*VAR47[VAR53]+VAR19);
            VAR50[VAR53]=VAR57*((double) VAR46[VAR53]*VAR48[VAR53]+(double) VAR45[VAR53]*VAR47[VAR53]);
            VAR49[VAR53]=VAR57*((double) VAR45[VAR53]*VAR48[VAR53]-(double) VAR46[VAR53]*VAR47[VAR53]);
            break;
          }
          case VAR58:
          {
            VAR50[VAR53]=FUN22((double) VAR46[VAR53]*VAR46[VAR53]+(double) VAR45[VAR53]*VAR45[VAR53]);
            VAR49[VAR53]=FUN23((double) VAR45[VAR53],(double) VAR46[VAR53])/(2.0*VAR59)+0.5;
            break;
          }
          case VAR60:
          {
            VAR50[VAR53]=VAR61*((double) VAR46[VAR53]*VAR48[VAR53]-(double) VAR45[VAR53]*VAR47[VAR53]);
            VAR49[VAR53]=VAR61*((double) VAR45[VAR53]*VAR48[VAR53]+(double) VAR46[VAR53]*VAR47[VAR53]);
            break;
          }
          case VAR62:
          {
            VAR50[VAR53]=VAR46[VAR53]*FUN24(2.0*VAR59*(VAR45[VAR53]-0.5));
            VAR49[VAR53]=VAR46[VAR53]*FUN25(2.0*VAR59*(VAR45[VAR53]-0.5));
            break;
          }
          case VAR63:
          {
            VAR50[VAR53]=VAR46[VAR53]-VAR48[VAR53];
            VAR49[VAR53]=VAR45[VAR53]-VAR47[VAR53];
            break;
          }
        }
      }
      VAR46+=FUN20(VAR16);
      VAR45+=FUN20(VAR15);
      VAR48+=FUN20(VAR18);
      VAR47+=FUN20(VAR17);
      VAR50+=FUN20(VAR22);
      VAR49+=FUN20(VAR20);
    }
    if (FUN26(VAR12,VAR5) == VAR33)
      VAR25=VAR33;
    if (FUN26(VAR13,VAR5) == VAR33)
      VAR25=VAR33;
    if (VAR2->VAR64 != (VAR65) NULL)
      {
        VAR24
          VAR66;
#if FUN14(VAR41)
        #pragma omp VAR67
#VAR43
        VAR27++;
        VAR66=FUN27(VAR2,VAR68,VAR27,VAR2->VAR42);
        if (VAR66 == VAR33)
          VAR25=VAR33;
      }
  }
  VAR13=FUN28(VAR13);
  VAR12=FUN28(VAR12);
  VAR11=FUN28(VAR11);
  VAR10=FUN28(VAR10);
  VAR9=FUN28(VAR9);
  VAR8=FUN28(VAR8);
  if (VAR25 == VAR33)
    VAR21=FUN7(VAR21);
  return(VAR21);
}