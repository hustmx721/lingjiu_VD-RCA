static void FUN1(double VAR1[4], const int VAR2[4], int VAR3, double VAR4, double VAR5)
{
    double VAR6 = VAR5 * VAR5, VAR7 = VAR6 * VAR5;
    double VAR8[] = {
        (5204 + 2520 * VAR5 + 1092 * VAR6 + 3280 * VAR7) / 12096,
        (2943 -  210 * VAR5 -  273 * VAR6 - 2460 * VAR7) / 12096,
        ( 486 -  924 * VAR5 -  546 * VAR6 +  984 * VAR7) / 12096,
         (  17 -  126 * VAR5 +  273 * VAR6 -  164 * VAR7) / 12096,
     };
    double VAR9[14];
     memcpy(VAR9, VAR8, sizeof(VAR8));
     memset(VAR9 + 4, 0, sizeof(VAR9) - sizeof(VAR8));
     int VAR10 = 6;
    FUN2(VAR9, VAR10, VAR8);
    for (int VAR11 = 0; VAR11 < 2 * VAR3; ++VAR11)
        FUN3(VAR9, ++VAR10);
    double VAR12[13];
    VAR10 = VAR2[3] + VAR3 + 3;
    FUN4(VAR12, VAR10, VAR4);
    memset(VAR12 + VAR10 + 1, 0, sizeof(VAR12) - (VAR10 + 1) * sizeof(VAR12[0]));
    VAR10 -= 3;
    FUN2(VAR12, VAR10, VAR8);
    for (int VAR11 = 0; VAR11 < VAR3; ++VAR11)
        FUN3(VAR12, --VAR10);
    double VAR13[4][4];
    FUN5(VAR13, VAR9, VAR2);
    double VAR14[4];
    for (int VAR15 = 0; VAR15 < 4; ++VAR15)
        VAR14[VAR15] = VAR9[0] - VAR9[VAR2[VAR15]] - VAR12[0] + VAR12[VAR2[VAR15]];
    for (int VAR15 = 0; VAR15 < 4; ++VAR15) {
        double VAR16 = 0;
        for (int VAR17 = 0; VAR17 < 4; ++VAR17)
            VAR16 += VAR13[VAR15][VAR17] * VAR14[VAR17];
        VAR1[VAR15] = FUN6(0, VAR16);
    }
}