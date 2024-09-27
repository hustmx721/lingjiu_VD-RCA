static int FUN1(VAR1 *VAR2, unsigned char *VAR3,
                                      const unsigned char *VAR4, size_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    unsigned int VAR8;
    size_t VAR9 = VAR7->VAR10, VAR11 = 0,
        VAR12 = 0;
#  if FUN3(VAR13)
    size_t VAR14 = 0, VAR15;
    VAR12 = VAR16 - VAR7->VAR17.VAR18;
#  VAR19
    VAR7->VAR10 = VAR20;
    if (VAR5 % VAR21)
        return 0;
    if (VAR2->VAR22) {
        if (VAR9 == VAR20)
            VAR9 = VAR5;
        else if (VAR5 !=
                 ((VAR9 + VAR23 +
                   VAR21) & -VAR21))
            return 0;
        else if (VAR7->VAR24.VAR25 >= VAR26)
            VAR11 = VAR21;
#  if FUN3(VAR13)
        if (VAR9 > (VAR12 + VAR11)
            && (VAR15 = (VAR9 - (VAR12 + VAR11)) / VAR16)) {
            SHA1_Update(&VAR7->VAR17, VAR4 + VAR11, VAR12);
            FUN4(VAR4, VAR3, VAR15, &VAR7->VAR27,
                               VAR2->VAR11, &VAR7->VAR17, VAR4 + VAR11 + VAR12);
            VAR15 *= VAR16;
            VAR14 += VAR15;
            VAR12 += VAR15;
            VAR7->VAR17.VAR28 += VAR15 >> 29;
            VAR7->VAR17.VAR29 += VAR15 <<= 3;
            if (VAR7->VAR17.VAR29 < (unsigned int)VAR15)
                VAR7->VAR17.VAR28++;
        } else {
            VAR12 = 0;
        }
#  VAR19
        VAR12 += VAR11;
        SHA1_Update(&VAR7->VAR17, VAR4 + VAR12, VAR9 - VAR12);
        if (VAR9 != VAR5) {
            if (VAR4 != VAR3)
                memcpy(VAR3 + VAR14, VAR4 + VAR14, VAR9 - VAR14);
            SHA1_Final(VAR3 + VAR9, &VAR7->VAR17);
            VAR7->VAR17 = VAR7->VAR30;
            SHA1_Update(&VAR7->VAR17, VAR3 + VAR9, VAR23);
            SHA1_Final(VAR3 + VAR9, &VAR7->VAR17);
            VAR9 += VAR23;
            for (VAR8 = VAR5 - VAR9 - 1; VAR9 < VAR5; VAR9++)
                VAR3[VAR9] = VAR8;
            FUN5(VAR3 + VAR14, VAR3 + VAR14, VAR5 - VAR14,
                              &VAR7->VAR27, VAR2->VAR11, 1);
        } else {
            FUN5(VAR4 + VAR14, VAR3 + VAR14, VAR5 - VAR14,
                              &VAR7->VAR27, VAR2->VAR11, 1);
        }
    } else {
        union {
            unsigned int VAR31[VAR23 / sizeof(unsigned int)];
            unsigned char VAR32[32 + VAR23];
        } VAR33, *VAR34;
        VAR34 = (void *)(((VAR35)VAR33.VAR32 + 31) & ((VAR35)0 - 32));
        if (VAR9 != VAR20) {
            size_t VAR36, VAR37, VAR38, VAR39;
            unsigned int VAR40, VAR41, VAR42, VAR43;
            int VAR44 = 1;
            union {
                unsigned int VAR31[VAR45];
                unsigned char VAR32[VAR16];
            } *VAR46 = (void *)VAR7->VAR17.VAR46;
#  if FUN3(VAR47)
            unsigned char VAR48[VAR21];
            int VAR49 = 0;
#  VAR19
            if ((VAR7->VAR24.VAR50[VAR9 - 4] << 8 | VAR7->VAR24.VAR50[VAR9 - 3])
                >= VAR26) {
                if (VAR5 < (VAR21 + VAR23 + 1))
                    return 0;
                memcpy(VAR2->VAR11, VAR4, VAR21);
                VAR4 += VAR21;
                VAR3 += VAR21;
                VAR5 -= VAR21;
            } else if (VAR5 < (VAR23 + 1))
                return 0;
#  if FUN3(VAR47)
            if (VAR5 >= 1024 && VAR2->VAR51 == 32) {
                memcpy(VAR48, VAR4 + VAR5 - 2 * VAR21,
                       VAR21);
                FUN5(VAR4 + VAR5 - VAR21,
                                  VAR3 + VAR5 - VAR21, VAR21,
                                  &VAR7->VAR27, VAR48, 0);
                VAR49 = 1;
            } else
#  VAR19
                FUN5(VAR4, VAR3, VAR5, &VAR7->VAR27, VAR2->VAR11, 0);
            VAR42 = VAR3[VAR5 - 1];
            VAR41 = VAR5 - (VAR23 + 1);
            VAR41 |= (255 - VAR41) >> (sizeof(VAR41) * 8 - 8);
             VAR41 |= (255 - VAR41) >> (sizeof(VAR41) * 8 - 8);
             VAR41 &= 255;
            VAR44 &= FUN6(VAR41, VAR42);
             VAR36 = VAR5 - (VAR23 + VAR42 + 1);
             VAR37 = (0 - ((VAR36 - VAR5) >> (sizeof(VAR36) * 8 - 1)));
             VAR36 &= VAR37;
            VAR7->VAR24.VAR50[VAR9 - 1] = VAR36;
            VAR7->VAR17 = VAR7->VAR52;
            SHA1_Update(&VAR7->VAR17, VAR7->VAR24.VAR50, VAR9);
#  if FUN3(VAR47)
            if (VAR49) {
                VAR15 = (VAR5 - (256 + 32 + VAR16)) / VAR16;
                VAR14 = VAR5 - VAR21 - VAR15 * VAR16;
                VAR12 = VAR16 - VAR9;
                FUN5(VAR4, VAR3, VAR14, &VAR7->VAR27, VAR2->VAR11, 0);
                SHA1_Update(&VAR7->VAR17, VAR3, VAR12);
                FUN7(VAR4 + VAR14,
                                      VAR3 + VAR14, VAR15, &VAR7->VAR27,
                                      VAR2->VAR11, &VAR7->VAR17, VAR3 + VAR12);
                VAR12 += VAR15 *= VAR16;
                VAR3 += VAR12;
                VAR5 -= VAR12;
                VAR36 -= VAR12;
                VAR7->VAR17.VAR29 += (VAR15 << 3);
                memcpy(VAR2->VAR11, VAR48, VAR21);
            }
#  VAR19
#  if 1
            VAR5 -= VAR23;
            if (VAR5 >= (256 + VAR16)) {
                VAR38 = (VAR5 - (256 + VAR16)) & (0 - VAR16);
                VAR38 += VAR16 - VAR7->VAR17.VAR18;
                SHA1_Update(&VAR7->VAR17, VAR3, VAR38);
                VAR3 += VAR38;
                VAR5 -= VAR38;
                VAR36 -= VAR38;
            }
            VAR43 = VAR7->VAR17.VAR29 + (VAR36 << 3);
#   ifdef VAR53
            VAR43 = FUN8(VAR43);
#   else
            VAR33.VAR32[0] = 0;
            VAR33.VAR32[1] = (unsigned char)(VAR43 >> 16);
            VAR33.VAR32[2] = (unsigned char)(VAR43 >> 8);
            VAR33.VAR32[3] = (unsigned char)VAR43;
            VAR43 = VAR33.VAR31[0];
#   VAR19
            VAR34->VAR31[0] = 0;
            VAR34->VAR31[1] = 0;
            VAR34->VAR31[2] = 0;
            VAR34->VAR31[3] = 0;
            VAR34->VAR31[4] = 0;
            for (VAR40 = VAR7->VAR17.VAR18, VAR38 = 0; VAR38 < VAR5; VAR38++) {
                size_t VAR32 = VAR3[VAR38];
                VAR37 = (VAR38 - VAR36) >> (sizeof(VAR38) * 8 - 8);
                VAR32 &= VAR37;
                VAR32 |= 0x80 & ~VAR37 & ~((VAR36 - VAR38) >> (sizeof(VAR38) * 8 - 8));
                VAR46->VAR32[VAR40++] = (unsigned char)VAR32;
                if (VAR40 != VAR16)
                    continue;
                VAR37 = 0 - ((VAR36 + 7 - VAR38) >> (sizeof(VAR38) * 8 - 1));
                VAR46->VAR31[VAR45 - 1] |= VAR43 & VAR37;
                FUN9(&VAR7->VAR17, VAR46, 1);
                VAR37 &= 0 - ((VAR38 - VAR36 - 72) >> (sizeof(VAR38) * 8 - 1));
                VAR34->VAR31[0] |= VAR7->VAR17.VAR54 & VAR37;
                VAR34->VAR31[1] |= VAR7->VAR17.VAR55 & VAR37;
                VAR34->VAR31[2] |= VAR7->VAR17.VAR56 & VAR37;
                VAR34->VAR31[3] |= VAR7->VAR17.VAR57 & VAR37;
                VAR34->VAR31[4] |= VAR7->VAR17.VAR58 & VAR37;
                VAR40 = 0;
            }
            for (VAR39 = VAR40; VAR39 < VAR16; VAR39++, VAR38++)
                VAR46->VAR32[VAR39] = 0;
            if (VAR40 > VAR16 - 8) {
                VAR37 = 0 - ((VAR36 + 8 - VAR38) >> (sizeof(VAR38) * 8 - 1));
                VAR46->VAR31[VAR45 - 1] |= VAR43 & VAR37;
                FUN9(&VAR7->VAR17, VAR46, 1);
                VAR37 &= 0 - ((VAR38 - VAR36 - 73) >> (sizeof(VAR38) * 8 - 1));
                VAR34->VAR31[0] |= VAR7->VAR17.VAR54 & VAR37;
                VAR34->VAR31[1] |= VAR7->VAR17.VAR55 & VAR37;
                VAR34->VAR31[2] |= VAR7->VAR17.VAR56 & VAR37;
                VAR34->VAR31[3] |= VAR7->VAR17.VAR57 & VAR37;
                VAR34->VAR31[4] |= VAR7->VAR17.VAR58 & VAR37;
                memset(VAR46, 0, VAR16);
                VAR38 += 64;
            }
            VAR46->VAR31[VAR45 - 1] = VAR43;
            FUN9(&VAR7->VAR17, VAR46, 1);
            VAR37 = 0 - ((VAR38 - VAR36 - 73) >> (sizeof(VAR38) * 8 - 1));
            VAR34->VAR31[0] |= VAR7->VAR17.VAR54 & VAR37;
            VAR34->VAR31[1] |= VAR7->VAR17.VAR55 & VAR37;
            VAR34->VAR31[2] |= VAR7->VAR17.VAR56 & VAR37;
            VAR34->VAR31[3] |= VAR7->VAR17.VAR57 & VAR37;
            VAR34->VAR31[4] |= VAR7->VAR17.VAR58 & VAR37;
#   ifdef VAR53
            VAR34->VAR31[0] = FUN8(VAR34->VAR31[0]);
            VAR34->VAR31[1] = FUN8(VAR34->VAR31[1]);
            VAR34->VAR31[2] = FUN8(VAR34->VAR31[2]);
            VAR34->VAR31[3] = FUN8(VAR34->VAR31[3]);
            VAR34->VAR31[4] = FUN8(VAR34->VAR31[4]);
#   else
            for (VAR39 = 0; VAR39 < 5; VAR39++) {
                VAR40 = VAR34->VAR31[VAR39];
                VAR34->VAR32[4 * VAR39 + 0] = (unsigned char)(VAR40 >> 24);
                VAR34->VAR32[4 * VAR39 + 1] = (unsigned char)(VAR40 >> 16);
                VAR34->VAR32[4 * VAR39 + 2] = (unsigned char)(VAR40 >> 8);
                VAR34->VAR32[4 * VAR39 + 3] = (unsigned char)VAR40;
            }
#   VAR19
            VAR5 += VAR23;
#  else
            SHA1_Update(&VAR7->VAR17, VAR3, VAR36);
            VAR40 = VAR7->VAR17.VAR18;
            SHA1_Final(VAR34->VAR32, &VAR7->VAR17);
            {
                unsigned int VAR59, VAR60;
                VAR59 =
                    1 + ((VAR16 - 9 - VAR40) >> (sizeof(VAR40) * 8 - 1));
                VAR40 += (unsigned int)(VAR5 - VAR36);
                VAR60 = VAR40 / VAR16;
                VAR40 %= VAR16;
                VAR60 +=
                    1 + ((VAR16 - 9 - VAR40) >> (sizeof(VAR40) * 8 - 1));
                for (; VAR59 < VAR60; VAR59++)
                    FUN9(&VAR7->VAR17, VAR46, 1);
            }
#  VAR19
            VAR7->VAR17 = VAR7->VAR30;
            SHA1_Update(&VAR7->VAR17, VAR34->VAR32, VAR23);
            SHA1_Final(VAR34->VAR32, &VAR7->VAR17);
            VAR3 += VAR36;
            VAR5 -= VAR36;
#  if 1
            {
                unsigned char *VAR61 = VAR3 + VAR5 - 1 - VAR41 - VAR23;
                size_t VAR62 = VAR3 - VAR61;
                unsigned int VAR32, VAR63;
                VAR41 += VAR23;
                for (VAR40 = 0, VAR39 = 0, VAR38 = 0; VAR38 < VAR41; VAR38++) {
                    VAR32 = VAR61[VAR38];
                    VAR63 =
                        ((int)(VAR38 - VAR62 - VAR23)) >> (sizeof(int) *
                                                                 8 - 1);
                    VAR40 |= (VAR32 ^ VAR42) & ~VAR63;
                    VAR63 &= ((int)(VAR62 - 1 - VAR38)) >> (sizeof(int) * 8 - 1);
                    VAR40 |= (VAR32 ^ VAR34->VAR32[VAR39]) & VAR63;
                    VAR39 += 1 & VAR63;
                }
                VAR41 -= VAR23;
                VAR40 = 0 - ((0 - VAR40) >> (sizeof(VAR40) * 8 - 1));
                VAR44 &= (int)~VAR40;
            }
#  else
            for (VAR40 = 0, VAR39 = 0; VAR39 < VAR23; VAR39++)
                VAR40 |= VAR3[VAR39] ^ VAR34->VAR32[VAR39];
            VAR40 = 0 - ((0 - VAR40) >> (sizeof(VAR40) * 8 - 1));
            VAR44 &= (int)~VAR40;
            VAR42 = (VAR42 & ~VAR40) | (VAR41 & VAR40);
            VAR3 = VAR3 + VAR5 - 1 - VAR42;
            for (VAR40 = 0, VAR39 = 0; VAR39 < VAR42; VAR39++)
                VAR40 |= VAR3[VAR39] ^ VAR42;
            VAR40 = (0 - VAR40) >> (sizeof(VAR40) * 8 - 1);
            VAR44 &= (int)~VAR40;
#  VAR19
            return VAR44;
        } else {
#  if FUN3(VAR47)
            if (VAR5 >= 1024 && VAR2->VAR51 == 32) {
                if (VAR12 %= VAR16)
                    VAR15 = (VAR5 - 3 * VAR16) / VAR16;
                else
                    VAR15 = (VAR5 - 2 * VAR16) / VAR16;
                VAR14 = VAR5 - VAR15 * VAR16;
                FUN5(VAR4, VAR3, VAR14, &VAR7->VAR27, VAR2->VAR11, 0);
                SHA1_Update(&VAR7->VAR17, VAR3, VAR12);
                FUN7(VAR4 + VAR14,
                                      VAR3 + VAR14, VAR15, &VAR7->VAR27,
                                      VAR2->VAR11, &VAR7->VAR17, VAR3 + VAR12);
                VAR12 += VAR15 *= VAR16;
                VAR3 += VAR12;
                VAR5 -= VAR12;
                VAR7->VAR17.VAR28 += VAR15 >> 29;
                VAR7->VAR17.VAR29 += VAR15 <<= 3;
                if (VAR7->VAR17.VAR29 < (unsigned int)VAR15)
                    VAR7->VAR17.VAR28++;
            } else
#  VAR19
                FUN5(VAR4, VAR3, VAR5, &VAR7->VAR27, VAR2->VAR11, 0);
            SHA1_Update(&VAR7->VAR17, VAR3, VAR5);
        }
    }
    return 1;
}