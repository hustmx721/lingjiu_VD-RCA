void VAR1::VAR2::FUN1(VAR3 *VAR4, bool VAR5) const {
    VAR4->FUN2(VAR6);
 const VAR7 *VAR8 = VAR9;
 if (VAR8 == NULL) {
 return;
 }
 uint8_t VAR10 = *VAR8;
 if (VAR11.VAR12 == VAR13 || VAR11.VAR12 == VAR14) {
 if (VAR15 == 126 || VAR15 == 127) {
 char VAR16[16];
            sprintf(VAR16, VAR6, (int)*VAR8);
            VAR4->FUN2(VAR16);
 return;
 }
        VAR4->FUN2((const char*)VAR8, VAR17);
 return;
 }
 if (VAR17 < FUN3() + 1) {
 return;
 }
 size_t VAR18 = VAR17 - FUN3() - 1;
 if (VAR5) {
        VAR8 += 4;
 int32_t VAR19 = VAR18 - 4;
 while(--VAR19 >= 0 && *++VAR8 != 0) ;
 int VAR20 = (VAR8 - VAR9);
 if (VAR20 >= (int)VAR18) {
 return;
 }
         VAR18 -= VAR20;
     }
    if (VAR18 <= 0) {
       return;
    }
     if (VAR10 == 0x00) {
         VAR4->FUN2((const char*)VAR8 + 1, VAR18);
 } else if (VAR10 == 0x03) {
        VAR4->FUN2((const char *)(VAR8 + 1), VAR18);
 } else if (VAR10 == 0x02) {
 int VAR21 = VAR18 / 2;
         const char16_t *VAR22 = (const char16_t *) (VAR8 + 1);
         char16_t *VAR23 = NULL;
 #if VAR24 == VAR25
        if (VAR21 > 0) {
            VAR23 = new (VAR26::VAR27) char16_t[VAR21];
            if (VAR23 == NULL) {
                return;
            }
            for (int VAR19 = 0; VAR19 < VAR21; VAR19++) {
                VAR23[VAR19] = FUN4(VAR22[VAR19]);
            }
            VAR22 = VAR23;
         }
 #VAR28
         VAR4->FUN2(VAR22, VAR21);
         if (VAR23 != NULL) {
 delete[] VAR23;
 }
 } else if (VAR10 == 0x01) {
 int VAR21 = VAR18 / 2;
         const char16_t *VAR22 = (const char16_t *) (VAR8 + 1);
         char16_t *VAR23 = NULL;
         if (*VAR22 == 0xfffe) {
            if (VAR21 <= 1) {
                return;
            }
            VAR23 = new (VAR26::VAR27) char16_t[VAR21];
            if (VAR23 == NULL) {
                return;
            }
             for (int VAR19 = 0; VAR19 < VAR21; VAR19++) {
                 VAR23[VAR19] = FUN4(VAR22[VAR19]);
             }
             VAR22 = VAR23;
            VAR22++;
            VAR21--;
        } else if (*VAR22 == 0xfeff) {
            if (VAR21 <= 1) {
                return;
            }
             VAR22++;
             VAR21--;
         }
 bool VAR29 = true;
 for (int VAR19 = 0; VAR19 < VAR21; VAR19++) {
 if (VAR22[VAR19] > 0xff) {
                VAR29 = false;
 break;
 }
         }
         if (VAR29) {
            char *VAR30 = new (VAR26::VAR27) char[VAR21];
            if (VAR30 != NULL) {
                for (int VAR19 = 0; VAR19 < VAR21; VAR19++) {
                    VAR30[VAR19] = VAR22[VAR19];
                }
                VAR4->FUN2(VAR30, VAR21);
                delete [] VAR30;
            } else {
                VAR4->FUN2(VAR22, VAR21);
             }
         } else {
             VAR4->FUN2(VAR22, VAR21);
         }
 if (VAR23 != NULL) {
 delete[] VAR23;
 }
 }
}