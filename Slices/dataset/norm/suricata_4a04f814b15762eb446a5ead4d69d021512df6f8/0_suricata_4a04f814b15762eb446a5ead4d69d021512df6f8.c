FUN1(uint32_t VAR1, uint16_t VAR2, int VAR3, const char VAR4,
FUN1(uint8_t VAR5, uint32_t VAR1, uint16_t VAR2, int VAR3,
    const char VAR4, int VAR6)
 {
     VAR7 *VAR8 = NULL;
     VAR9 *VAR10;
    IPV6Hdr VAR11;
    VAR8 = FUN2(1, sizeof(*VAR8) + VAR12);
    if (FUN3(VAR8 == NULL))
        return NULL;
    FUN4(VAR8);
    gettimeofday(&VAR8->VAR13, NULL);
    VAR11.VAR14 = 44;
    VAR11.VAR15 = 2;
    VAR11.VAR16[0] = 0x01010101;
    VAR11.VAR16[1] = 0x01010101;
    VAR11.VAR16[2] = 0x01010101;
    VAR11.VAR16[3] = 0x01010101;
    VAR11.VAR17[0] = 0x02020202;
    VAR11.VAR17[1] = 0x02020202;
    VAR11.VAR17[2] = 0x02020202;
    VAR11.VAR17[3] = 0x02020202;
    FUN5(VAR8, (VAR9 *)&VAR11, sizeof(VAR18));
    VAR8->VAR11 = (VAR18 *)FUN6(VAR8);
     FUN7(VAR8->VAR11, 6);
     VAR19 *VAR20 = (VAR19 *)(FUN6(VAR8) + sizeof(VAR18));
    VAR20->VAR21 = VAR5;
     VAR20->VAR22 = FUN8(VAR1);
     VAR20->VAR23 = FUN9((VAR2 << 3) | VAR3);
    FUN10(VAR8, (VAR9 *)VAR20, 8, 8 + VAR6, 0);
    VAR10 = FUN2(1, VAR6);
    if (FUN3(VAR10 == NULL))
        return NULL;
    memset(VAR10, VAR4, VAR6);
    FUN11(VAR8, sizeof(VAR18) + sizeof(VAR19), VAR10, VAR6);
    FUN12(VAR8, sizeof(VAR18) + sizeof(VAR19) + VAR6);
    FUN13(VAR10);
    VAR8->VAR11->VAR24 = FUN9(sizeof(VAR19) + VAR6);
    FUN14(VAR8, &VAR8->VAR25);
    FUN15(VAR8, &VAR8->VAR26);
    if (FUN16(VAR8) != 6)
        goto VAR27;
    if (FUN17(VAR8) != 44)
        goto VAR27;
    if (FUN18(VAR8) != sizeof(VAR19) + VAR6)
        goto VAR27;
    return VAR8;
VAR27:
    fprintf(VAR28, VAR29);
    if (VAR8 != NULL)
        FUN13(VAR8);
    return NULL;
}