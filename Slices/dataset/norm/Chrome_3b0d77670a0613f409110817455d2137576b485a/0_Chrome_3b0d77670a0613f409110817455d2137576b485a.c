void VAR1::FUN1(const VAR2::VAR3& VAR4) {
  struct VAR5 *VAR6 = FUN2();
  if (VAR6 == NULL) {
    FUN3(VAR7) << VAR8;
     return;
   }
   VAR9::VAR10<VAR2::VAR11> VAR12 = VAR4.VAR12;
 #if FUN4(VAR13) || FUN4(VAR14)
  VAR6->VAR15 = FUN5(VAR16::FUN6());
  if (VAR6->VAR15 < 0) {
    FUN3(VAR7) << VAR8;
    return;
  }
  VAR6->VAR17 = VAR18;
# if FUN4(VAR14)
  FUN7(VAR12.FUN8() >= 1);
  VAR19 = VAR2::FUN9(VAR12[VAR12.FUN8() - 1]);
  VAR12.FUN10();
# VAR20
#VAR20
  FUN7(VAR12.FUN8() >= 1);
  NaClHandle VAR21 = VAR2::FUN9(VAR12[VAR12.FUN8() - 1]);
  VAR12.FUN10();
#if FUN4(VAR22)
  VAR6->VAR23 = FUN11(reinterpret_cast<VAR24>(VAR21),
                                 VAR25 | VAR26);
  if (VAR6->VAR23 < 0) {
    FUN3(VAR7) << VAR8;
    return;
  }
#else
  VAR6->VAR23 = VAR21;
#VAR20
  if (VAR4.VAR27) {
    FUN12(VAR4.VAR28.FUN13(), (VAR29) 64);
    VAR6->VAR30 = FUN14(
        new FUN15(this), VAR4.VAR28,
        VAR4.VAR31);
  }
  FUN7(VAR12.FUN8() == 1);
  VAR6->VAR32 = VAR2::FUN9(VAR12[0]);
  VAR6->VAR33 = VAR4.VAR33;
  VAR6->VAR34 = VAR4.VAR34;
#if FUN4(VAR22)
  VAR6->VAR35 = VAR36;
  VAR6->VAR37 = VAR38;
#VAR20
  FUN16(VAR6);
  FUN17();
}