void VAR1::FUN1(const VAR2::VAR3& VAR4) {
  struct VAR5 *VAR6 = FUN2();
  if (VAR6 == NULL) {
    FUN3(VAR7) << VAR8;
     return;
   }
  if (VAR4.VAR9) {
    VAR10::ChannelHandle VAR11 =
        VAR10::VAR12::FUN4(VAR8);
    VAR13<VAR14> FUN5(new FUN6(
        VAR11, VAR15.FUN7()));
    VAR6->VAR16 = VAR17.FUN8()->FUN9();
#if FUN10(VAR18)
    VAR11.socket = VAR19::FUN11(
        VAR17.FUN8()->FUN12(), true);
#VAR20
    if (!FUN13(new FUN14(VAR11)))
      FUN3(VAR7) << VAR8;
  }
   VAR21::VAR22<VAR2::VAR23> VAR24 = VAR4.VAR24;
 #if FUN10(VAR25) || FUN10(VAR26)
  VAR6->VAR27 = FUN15(VAR19::FUN16());
  if (VAR6->VAR27 < 0) {
    FUN3(VAR7) << VAR8;
    return;
  }
  VAR6->VAR28 = VAR29;
# if FUN10(VAR26)
  FUN17(VAR24.FUN18() >= 1);
  VAR30 = VAR2::FUN19(VAR24[VAR24.FUN18() - 1]);
  VAR24.FUN20();
# VAR20
#VAR20
  FUN17(VAR24.FUN18() >= 1);
  NaClHandle VAR31 = VAR2::FUN19(VAR24[VAR24.FUN18() - 1]);
  VAR24.FUN20();
#if FUN10(VAR32)
  VAR6->VAR33 = FUN21(reinterpret_cast<VAR34>(VAR31),
                                 VAR35 | VAR36);
  if (VAR6->VAR33 < 0) {
    FUN3(VAR7) << VAR8;
    return;
  }
#else
  VAR6->VAR33 = VAR31;
#VAR20
  if (VAR4.VAR37) {
    FUN22(VAR4.VAR38.FUN23(), (VAR39) 64);
    VAR6->VAR40 = FUN24(
        new FUN25(this), VAR4.VAR38,
        VAR4.VAR41);
  }
  FUN17(VAR24.FUN18() == 1);
  VAR6->VAR42 = VAR2::FUN19(VAR24[0]);
  VAR6->VAR43 = VAR4.VAR43;
  VAR6->VAR44 = VAR4.VAR44;
#if FUN10(VAR32)
  VAR6->VAR45 = VAR46;
  VAR6->VAR47 = VAR48;
#VAR20
  FUN26(VAR6);
  FUN27();
}