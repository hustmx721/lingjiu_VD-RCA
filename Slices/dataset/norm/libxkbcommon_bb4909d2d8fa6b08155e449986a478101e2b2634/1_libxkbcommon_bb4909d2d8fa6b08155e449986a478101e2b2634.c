FUN1(struct VAR1 *VAR2, const VAR3 *VAR4,
               const char **VAR5, const char **VAR6,
               VAR3 **VAR7)
{
    switch (VAR4->VAR4.VAR8) {
    case VAR9:
        *VAR5 = NULL;
        *VAR6 = FUN2(VAR2, VAR4->VAR10.VAR10);
        *VAR7 = NULL;
        return (*VAR6 != NULL);
    case VAR11:
         *VAR5 = FUN2(VAR2, VAR4->VAR12.VAR13);
         *VAR6 = FUN2(VAR2, VAR4->VAR12.VAR14);
         *VAR7 = NULL;
        return true;
     case VAR15:
         *VAR5 = FUN2(VAR2, VAR4->VAR16.VAR13);
         *VAR6 = FUN2(VAR2, VAR4->VAR16.VAR14);
         *VAR7 = VAR4->VAR16.VAR17;
         return true;
     default:
         break;
    }
    FUN3(VAR2, VAR18, VAR4->VAR4.VAR8);
    return false;
}