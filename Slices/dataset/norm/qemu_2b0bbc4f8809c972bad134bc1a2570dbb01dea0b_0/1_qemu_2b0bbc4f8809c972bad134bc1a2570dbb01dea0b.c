static int FUN1(VAR1 *VAR2, size_t VAR3)
{
    ssize_t VAR4;
    VAR5 *VAR6 = FUN2(FUN3(65536, VAR3));
    while (VAR3 > 0) {
        size_t VAR7 = FUN3(65536, VAR3);
        VAR4 = FUN4(VAR2, VAR6, VAR7);
        if (VAR4 < 0) {
            FUN5(VAR6);
            return VAR4;
        }
        VAR3 -= VAR7;
    }
    FUN5(VAR6);
    return 0;
}