FUN1(uint32_t VAR1, uint16_t VAR2, int VAR3, const char VAR4,
    int VAR5)
 {
     VAR6 *VAR7 = NULL;
     VAR8 *VAR9;
    IPV6Hdr VAR10;
    VAR7 = FUN2(1, sizeof(*VAR7) + VAR11);
    if (FUN3(VAR7 == NULL))
        return NULL;
    FUN4(VAR7);
    gettimeofday(&VAR7->VAR12, NULL);
    VAR10.VAR13 = 44;
    VAR10.VAR14 = 2;
    VAR10.VAR15[0] = 0x01010101;
    VAR10.VAR15[1] = 0x01010101;
    VAR10.VAR15[2] = 0x01010101;
    VAR10.VAR15[3] = 0x01010101;
    VAR10.VAR16[0] = 0x02020202;
    VAR10.VAR16[1] = 0x02020202;
    VAR10.VAR16[2] = 0x02020202;
    VAR10.VAR16[3] = 0x02020202;
    FUN5(VAR7, (VAR8 *)&VAR10, sizeof(VAR17));
    VAR7->VAR10 = (VAR17 *)FUN6(VAR7);
     FUN7(VAR7->VAR10, 6);
     VAR18 *VAR19 = (VAR18 *)(FUN6(VAR7) + sizeof(VAR17));
    VAR19->VAR20 = VAR21;
     VAR19->VAR22 = FUN8(VAR1);
     VAR19->VAR23 = FUN9((VAR2 << 3) | VAR3);
    FUN10(VAR7, (VAR8 *)VAR19, 8, 8 + VAR5, 0);
    VAR9 = FUN2(1, VAR5);
    if (FUN3(VAR9 == NULL))
        return NULL;
    memset(VAR9, VAR4, VAR5);
    FUN11(VAR7, sizeof(VAR17) + sizeof(VAR18), VAR9, VAR5);
    FUN12(VAR7, sizeof(VAR17) + sizeof(VAR18) + VAR5);
    FUN13(VAR9);
    VAR7->VAR10->VAR24 = FUN9(sizeof(VAR18) + VAR5);
    FUN14(VAR7, &VAR7->VAR25);
    FUN15(VAR7, &VAR7->VAR26);
    if (FUN16(VAR7) != 6)
        goto VAR27;
    if (FUN17(VAR7) != 44)
        goto VAR27;
    if (FUN18(VAR7) != sizeof(VAR18) + VAR5)
        goto VAR27;
    return VAR7;
VAR27:
    fprintf(VAR28, VAR29);
    if (VAR7 != NULL)
        FUN13(VAR7);
    return NULL;
}