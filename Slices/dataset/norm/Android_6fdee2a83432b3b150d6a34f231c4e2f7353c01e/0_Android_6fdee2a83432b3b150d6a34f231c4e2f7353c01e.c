 int main(int argc VAR1, char** argv)
 {
    FUN1(
        VAR2,
        VAR3,
        65 );
     signal(VAR4, VAR5);
     char VAR6[VAR7];
     bool VAR8 = (FUN2(VAR2, VAR6, VAR2) > 0) && (atoi(VAR6) == 1);
 pid_t VAR9;
 if (VAR8 && (VAR9 = FUN3()) != 0) {
        strcpy(argv[0], VAR2);
        VAR10<VAR11> FUN4(VAR11::FUN5());
 VAR12::FUN6();
 VAR11::FUN5()->FUN7();
 for (;;) {
 siginfo_t VAR13;
 int VAR14 = FUN8(VAR15, VAR9, &VAR13, VAR16 | VAR17 | VAR18);
 if (VAR14 == VAR19) {
 continue;
 }
 if (VAR14 < 0) {
 break;
 }
 char VAR20[32];
 const char *VAR21;
 switch (VAR13.VAR22) {
 case VAR23:
                VAR21 = VAR2;
 break;
 case VAR24:
                VAR21 = VAR2;
 break;
 case VAR25:
                VAR21 = VAR2;
 break;
 case VAR26:
                VAR21 = VAR2;
 break;
 case VAR27:
                VAR21 = VAR2;
 break;
 case VAR28:
                VAR21 = VAR2;
 break;
 default:
                snprintf(VAR20, sizeof(VAR20), VAR2, VAR13.VAR22);
                VAR21 = VAR20;
 break;
 }
 struct rusage VAR29;
            getrusage(VAR30, &VAR29);
            FUN9(VAR31, VAR2, VAR2,
                    VAR13.VAR32, VAR13.VAR33, VAR21,
                    VAR29.VAR34.VAR35, VAR29.VAR34.VAR36 / 1000,
                    VAR29.VAR37.VAR35, VAR29.VAR37.VAR36 / 1000);
            VAR10<VAR38> VAR39 = FUN10();
            VAR10<VAR40> VAR41 = VAR39->FUN11(FUN12(VAR2));
 if (VAR41 != 0) {
 VAR42<VAR43> VAR44;
                VAR41->FUN13(-1, VAR44);
 }
 switch (VAR13.VAR22) {
 case VAR23:
 case VAR24:
 case VAR25: {
                FUN9(VAR45, VAR2, VAR2);
                FUN14(0);
 }
 default:
 break;
 }
 }
 } else {
 if (VAR8) {
            FUN15(VAR46, VAR47);
            FUN16(0, 0);
 }
 FUN17();
        VAR10<VAR11> FUN4(VAR11::FUN5());
        VAR10<VAR38> VAR39 = FUN10();
        FUN18(VAR2, VAR39.FUN19());
 VAR48::FUN6();
 VAR49::FUN6();
 VAR50::FUN6();
 VAR51::FUN6();
 VAR52::FUN6();
 VAR53::FUN6();
 VAR54::FUN6();
        FUN20();
 VAR11::FUN5()->FUN7();
 VAR55::FUN5()->FUN21();
 }
}