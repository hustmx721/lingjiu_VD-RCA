FUN1(VAR1 *VAR2,
                 const struct VAR3 *VAR4, register const VAR5 *VAR6)
{
        struct juniper_l2info_t VAR7;
        struct VAR8 {
            uint8_t VAR9[2];
            uint8_t VAR10;
            uint8_t VAR11;
            uint8_t VAR12[4];
            uint8_t VAR13[4];
            uint8_t VAR14[4];
        };
        u_int VAR15,VAR16;
        const struct VAR8 *VAR17;
        VAR7.VAR18 = VAR19;
        if (FUN2(VAR2, VAR6, VAR4, &VAR7) == 0)
            return VAR7.VAR20;
         VAR6+=VAR7.VAR20;
         VAR17 = (const struct VAR8 *)VAR6;
        FUN3(*VAR17);
         switch (VAR17->VAR11) {
         case VAR21:
         case VAR22:
            VAR15 = 0;
            VAR16 = 1;
            break;
        case VAR23:
        case VAR24:
        case VAR25:
            VAR15 = 16;
            VAR16 = 0;
            break;
        default:
            FUN4((VAR2, VAR26,
                   VAR17->VAR11,
                   VAR7.VAR27));
            return VAR7.VAR20;
        }
        VAR7.VAR27-=VAR15;
        VAR6+=VAR15;
        if (VAR2->VAR28) {
            if (!VAR16) {
                FUN4((VAR2, VAR26,
                       FUN5(&VAR17->VAR9),
                       VAR17->VAR10,
                       FUN6(VAR29,VAR26,VAR17->VAR11),
                       VAR17->VAR11,
                       FUN7(&VAR17->VAR12),
                       FUN8(VAR2, &VAR17->VAR13),
                       FUN8(VAR2, &VAR17->VAR14),
                       VAR7.VAR27));
            } else {
                FUN4((VAR2, VAR26,
                       FUN5(&VAR17->VAR9),
                       VAR17->VAR10,
                       FUN6(VAR29,VAR26,VAR17->VAR11),
                       VAR17->VAR11,
                       VAR7.VAR27));
            }
        }
         FUN9(VAR2, VAR6, VAR7.VAR27);
         return VAR7.VAR20;
VAR30:
	FUN4((VAR2, VAR26));
	return VAR7.VAR20;
 }