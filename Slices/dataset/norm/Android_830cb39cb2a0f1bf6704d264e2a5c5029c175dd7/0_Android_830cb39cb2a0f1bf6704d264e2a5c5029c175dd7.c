static void FUN1(uint8_t VAR1, uint8_t VAR2, uint8_t VAR3,
                           VAR4* VAR5) {
 uint8_t VAR6;
  tAVRC_MSG VAR7;
 VAR8* VAR9;
 VAR8* VAR10;
 bool VAR11 = false;
 bool VAR12 = true;
  VAR4* VAR13 = NULL;
 VAR8* VAR14;
 int VAR15;
 bool VAR16 = false;
 const char* VAR17 = VAR18;
  VAR19* VAR20 = &VAR7.VAR21;
 if (VAR3 == VAR22 && (VAR5->VAR23 & VAR24 &&
                         VAR25 < sizeof(VAR5->VAR26))) {
    VAR17 = VAR18;
    FUN2(VAR5);
 return;
 }
 if (VAR3 == VAR27) {
    FUN2(VAR5);
    FUN3(VAR1);
 return;
 } else if (VAR3 == VAR28) {
    FUN4(VAR18, VAR1);
    FUN5(VAR29.VAR30[VAR1].VAR31);
 }
  VAR9 = (VAR8*)(VAR5 + 1) + VAR5->VAR32;
  memset(&VAR7, 0, sizeof(VAR33));
 if (VAR5->VAR23 == VAR34) {
    VAR6 = VAR35;
    VAR7.VAR36.VAR37.VAR38 = VAR3;
    VAR7.VAR36.VAR39 = VAR9;
     VAR7.VAR36.VAR40 = VAR5->VAR26;
     VAR7.VAR36.VAR41 = VAR5;
   } else {
    if (VAR5->VAR26 < VAR42) {
      FUN6(0x534e4554, VAR18);
      FUN7(VAR18,
                         VAR43, VAR5->VAR26, VAR42);
      FUN2(VAR5);
      return;
    }
     VAR7.VAR37.VAR38 = VAR9[0] & VAR44;
     FUN4(VAR18, VAR43,
                      VAR1, VAR7.VAR37.VAR38, VAR5->VAR32, VAR5->VAR26);
    VAR7.VAR37.VAR45 =
 (VAR9[1] & VAR46) >> VAR47;
    VAR7.VAR37.VAR48 = VAR9[1] & VAR49;
    VAR6 = VAR9[2];
 }
 if (((VAR29.VAR50[VAR1].VAR51 & VAR52) && (VAR3 == VAR22)) ||
 ((VAR29.VAR50[VAR1].VAR51 & VAR53) && (VAR3 == VAR28))) {
 switch (VAR6) {
 case VAR54:
 if (VAR3 == VAR22) {
          VAR13 = FUN8(VAR5, VAR55);
          VAR14 = FUN9(VAR13);
 *VAR14 = VAR56;
          VAR14 += VAR42;
 *VAR14++ = 7;
 *VAR14++ = (VAR57 << VAR47);
          FUN10(VAR14, VAR29.VAR50[VAR1].VAR58);
          VAR13->VAR26 =
 (VAR59)(VAR14 - (VAR8*)(VAR13 + 1) - VAR13->VAR32);
          VAR3 = VAR28;
           VAR17 = VAR18;
         } else {
          if (VAR5->VAR26 < VAR55) {
            FUN7(
                VAR18,
                VAR43, VAR5->VAR26, VAR55);
            FUN6(0x534e4554, VAR18);
            VAR11 = true;
            VAR17 = VAR18;
            break;
          }
           VAR9 += 4;
           VAR7.VAR60.VAR61 =
               (*VAR9 & VAR46) >> VAR47;
          VAR7.VAR60.VAR60 = *VAR9 & VAR49;
          VAR9++;
          FUN11(VAR7.VAR60.VAR58, VAR9);
 }
 break;
 case VAR62:
 if (VAR3 == VAR22) {
          VAR13 = FUN8(VAR5, VAR63);
          VAR14 = FUN9(VAR13);
 *VAR14 = VAR56;
          VAR14 += 4;
 *VAR14++ = (VAR57 << VAR47);
          memset(VAR14, VAR64, VAR65);
          VAR14 += VAR65;
          VAR13->VAR26 =
 (VAR59)(VAR14 - (VAR8*)(VAR13 + 1) - VAR13->VAR32);
          VAR3 = VAR28;
           VAR17 = VAR18;
         } else {
          if (VAR5->VAR26 < VAR63) {
            FUN7(
                VAR18,
                VAR43, VAR5->VAR26, VAR63);
            FUN6(0x534e4554, VAR18);
            VAR11 = true;
            VAR17 = VAR18;
            break;
          }
           VAR9 += VAR42;
           VAR7.VAR66.VAR67 =
               (*VAR9++ >> VAR68) & VAR69;
          VAR15 = 0;
 while (*VAR9 != VAR64 && VAR15 < VAR70) {
            VAR7.VAR66.VAR45[VAR15] = *VAR9++ >> VAR47;
 if (VAR7.VAR66.VAR45[VAR15] == VAR57)
              VAR7.VAR66.VAR71 = true;
            VAR15++;
 }
 }
 break;
 case VAR72: {
        VAR9 = (VAR8*)(VAR5 + 1) + VAR5->VAR32;
        VAR10 = VAR9;
 if (VAR5->VAR26 <
            VAR73)
 {
 if (VAR3 == VAR22)
            VAR16 = true;
 else
            VAR11 = true;
 break;
 }
        VAR9 += VAR42;
        FUN11(VAR20->VAR58, VAR9);
        VAR20->VAR74 = VAR9;
        VAR20->VAR75 = VAR5->VAR26 - (VAR9 - VAR10);
 uint8_t VAR76 = 0;
 if (VAR20->VAR58 == VAR77) {
 if (VAR5->VAR26 < (VAR73 + VAR78)) {
 if (VAR3 == VAR22)
              VAR16 = true;
 else
              VAR11 = true;
 break;
 }
          VAR76 = FUN12(VAR1, VAR2, VAR3, &VAR5, VAR20);
 if (VAR76 > 0) VAR11 = true;
 }
 if (VAR76 > 0) {
 if (VAR76 != 4) VAR12 = false;
 switch (VAR76) {
 case 1:
              VAR17 = VAR18;
 break;
 case 2:
              VAR17 = VAR18;
 break;
 case 3:
              VAR17 = VAR18;
 break;
 case 4:
              VAR17 = VAR18;
 break;
 default:
              VAR17 = VAR18;
 }
 }
 if ((VAR3 == VAR28) && (VAR76 != 2)) {
          FUN13(VAR1);
 }
 } break;
 case VAR79:
 if (VAR5->VAR26 < 5)
 {
 if (VAR3 == VAR22)
            VAR16 = true;
 else
            VAR11 = true;
 break;
 }
        VAR9 += VAR42;
        VAR7.VAR80.VAR81 = (VAR82 & *VAR9);
 if (VAR83 & *VAR9)
          VAR7.VAR80.VAR84 = true;
 else
          VAR7.VAR80.VAR84 = false;
        VAR9++;
        VAR7.VAR80.VAR85 = *VAR9++;
 if (VAR7.VAR80.VAR85 != VAR5->VAR26 - 5)
          VAR7.VAR80.VAR85 = VAR5->VAR26 - 5;
 if (VAR7.VAR80.VAR85)
          VAR7.VAR80.VAR86 = VAR9;
 else
          VAR7.VAR80.VAR86 = NULL;
 break;
 case VAR35:
 if (VAR3 == VAR28) {
          FUN13(VAR1);
 }
 break;
 default:
 if ((VAR29.VAR50[VAR1].VAR51 & VAR52) &&
 (VAR3 == VAR22)) {
          VAR16 = true;
 }
        VAR11 = true;
 break;
 }
 } else
 {
 if (VAR6 != VAR35) VAR11 = true;
 }
 if (VAR16) {
    VAR13 = FUN8(VAR5, VAR87);
    VAR14 = FUN9(VAR13);
 *VAR14 = VAR88;
    VAR17 = VAR18;
    VAR3 = VAR28;
    VAR11 = true;
 }
 if (VAR13) {
    FUN14(VAR1, VAR2, VAR3, VAR13);
    VAR11 = true;
 }
 if (!VAR11) {
    VAR7.VAR37.VAR6 = VAR6;
    VAR29.VAR50[VAR1].VAR89.FUN15(VAR1, VAR2, VAR6, &VAR7);
 } else {
    FUN7(VAR18,
                       VAR43, VAR17, VAR1,
                       VAR29.VAR50[VAR1].VAR51, VAR3, VAR6);
 }
 if (VAR6 == VAR35 && VAR7.VAR36.VAR41 == NULL) {
    VAR12 = false;
 }
 if (VAR12) FUN2(VAR5);
}