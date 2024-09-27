 int main(int argc VAR1, char** argv)
 {
     signal(VAR2, VAR3);
     char VAR4[VAR5];
     bool VAR6 = (FUN1(VAR7, VAR4, VAR7) > 0) && (atoi(VAR4) == 1);
 pid_t VAR8;
 if (VAR6 && (VAR8 = FUN2()) != 0) {
        strcpy(argv[0], VAR7);
        VAR9<VAR10> FUN3(VAR10::FUN4());
 VAR11::FUN5();
 VAR10::FUN4()->FUN6();
 for (;;) {
 siginfo_t VAR12;
 int VAR13 = FUN7(VAR14, VAR8, &VAR12, VAR15 | VAR16 | VAR17);
 if (VAR13 == VAR18) {
 continue;
 }
 if (VAR13 < 0) {
 break;
 }
 char VAR19[32];
 const char *VAR20;
 switch (VAR12.VAR21) {
 case VAR22:
                VAR20 = VAR7;
 break;
 case VAR23:
                VAR20 = VAR7;
 break;
 case VAR24:
                VAR20 = VAR7;
 break;
 case VAR25:
                VAR20 = VAR7;
 break;
 case VAR26:
                VAR20 = VAR7;
 break;
 case VAR27:
                VAR20 = VAR7;
 break;
 default:
                snprintf(VAR19, sizeof(VAR19), VAR7, VAR12.VAR21);
                VAR20 = VAR19;
 break;
 }
 struct rusage VAR28;
            getrusage(VAR29, &VAR28);
            FUN8(VAR30, VAR7, VAR7,
                    VAR12.VAR31, VAR12.VAR32, VAR20,
                    VAR28.VAR33.VAR34, VAR28.VAR33.VAR35 / 1000,
                    VAR28.VAR36.VAR34, VAR28.VAR36.VAR35 / 1000);
            VAR9<VAR37> VAR38 = FUN9();
            VAR9<VAR39> VAR40 = VAR38->FUN10(FUN11(VAR7));
 if (VAR40 != 0) {
 VAR41<VAR42> VAR43;
                VAR40->FUN12(-1, VAR43);
 }
 switch (VAR12.VAR21) {
 case VAR22:
 case VAR23:
 case VAR24: {
                FUN8(VAR44, VAR7, VAR7);
                FUN13(0);
 }
 default:
 break;
 }
 }
 } else {
 if (VAR6) {
            FUN14(VAR45, VAR46);
            FUN15(0, 0);
 }
 FUN16();
        VAR9<VAR10> FUN3(VAR10::FUN4());
        VAR9<VAR37> VAR38 = FUN9();
        FUN17(VAR7, VAR38.FUN18());
 VAR47::FUN5();
 VAR48::FUN5();
 VAR49::FUN5();
 VAR50::FUN5();
 VAR51::FUN5();
 VAR52::FUN5();
 VAR53::FUN5();
        FUN19();
 VAR10::FUN4()->FUN6();
 VAR54::FUN4()->FUN20();
 }
}