int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6,
        VAR7 *VAR8, uint32_t VAR9, VAR10 *VAR11, enum DecodeTunnelProto VAR12)
{
    switch (VAR12) {
        case VAR13:
            return FUN2(VAR2, VAR4, VAR6, VAR8, VAR9, VAR11);
         case VAR14:
             return FUN3(VAR2, VAR4, VAR6, VAR8, VAR9, VAR11);
         case VAR15:
        case VAR16:
             return FUN4(VAR2, VAR4, VAR6, VAR8, VAR9, VAR11);
         case VAR17:
             return FUN5(VAR2, VAR4, VAR6, VAR8, VAR9, VAR11);
        case VAR18:
            return FUN6(VAR2, VAR4, VAR6, VAR8, VAR9, VAR11);
         case VAR19:
             return FUN7(VAR2, VAR4, VAR6, VAR8, VAR9, VAR11);
         default:
            FUN8(STRING PRIu32 VAR20, VAR12);
             break;
     }
     return VAR21;
}