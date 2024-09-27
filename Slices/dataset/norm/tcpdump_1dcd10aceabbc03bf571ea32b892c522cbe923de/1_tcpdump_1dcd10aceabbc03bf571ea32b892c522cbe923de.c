FUN1(VAR1 *VAR2,
                   const struct VAR3 *VAR4, register const VAR5 *VAR6)
{
        int VAR7;
        struct juniper_l2info_t VAR8;
        VAR8.VAR9 = VAR10;
        if (FUN2(VAR2, VAR6, VAR4, &VAR8) == 0)
            return VAR8.VAR11;
        VAR6+=VAR8.VAR11;
        if (VAR8.VAR12[0] == 0x80) {
            FUN3(VAR2, VAR6, VAR8.VAR13, VAR14);
            return VAR8.VAR11;
        }
        if (FUN4(VAR6) == 0xfefe03 ||
            FUN4(VAR6) == 0xaaaa03) {
            VAR7 = FUN5(VAR2, VAR6, VAR8.VAR13, VAR8.VAR15, NULL, NULL);
            if (VAR7 > 0)
                return VAR8.VAR11;
         }
         if (VAR6[0] == 0x03) {
            FUN6(VAR2, VAR6 + 1, VAR8.VAR13 - 1, VAR8.VAR15 - 1);
             return VAR8.VAR11;
         }
        if (FUN7(VAR2, VAR6, VAR8.VAR13) != 0)
            return VAR8.VAR11;
	return VAR8.VAR11;
}