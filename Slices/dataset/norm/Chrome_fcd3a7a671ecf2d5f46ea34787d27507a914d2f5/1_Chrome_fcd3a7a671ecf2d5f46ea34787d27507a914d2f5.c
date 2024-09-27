bool VAR1::VAR2::FUN1(
    const VAR3& VAR4,
    const VAR5<VAR6>& VAR7,
    const VAR8::VAR9& VAR10,
    int VAR11,
    bool VAR12,
    const VAR13<VAR14::VAR15>& VAR16,
    VAR17* VAR18,
    VAR19* VAR20,
    VAR21::VAR22* VAR23,
     VAR24* VAR25,
     const VAR8::VAR9& VAR26,
     const VAR27& VAR28,
    bool VAR29,
     VAR30::VAR31* VAR30,
     const VAR8::VAR9& VAR32,
     TestingMode VAR33,
    VAR34* VAR35,
    VAR36* VAR37,
    ReportUnrecoverableErrorFunction VAR38) {
  FUN2(!VAR39);
  FUN3(VAR40.FUN4());
  FUN5(1) << VAR41;
  VAR42 = FUN6(VAR43.FUN7());
  VAR44 = VAR16;
  VAR45 = VAR20;
   VAR46 = VAR25;
   VAR47 = VAR33;
  VAR48 = VAR29;
   VAR49.FUN8(VAR30);
   FUN9(&VAR50);
  FUN10(VAR7);
  FUN9(&VAR51);
  VAR52 = VAR4.FUN11(
      VAR53::VAR54::VAR55);
  VAR56 = VAR35;
  VAR57 = VAR37;
  VAR58 = VAR38;
  VAR59.VAR60.FUN8(
      new VAR53::FUN12(VAR56,
                              VAR57,
                              VAR58));
  VAR61.FUN8(new FUN13(
      VAR10, VAR11, VAR12, VAR26, VAR18));
  VAR62::VAR63::FUN14(this);
  VAR64 = true;
  FUN15()->FUN16(this);
  if (VAR47 == VAR65) {
    FUN5(1) << VAR41;
    VAR8::VAR66<VAR67*> VAR68;
    VAR68.FUN17(&VAR69);
    VAR68.FUN17(this);
    VAR70* VAR71 = new FUN18(
        VAR61.FUN19(),
        FUN20(),
        VAR20,
        VAR23,
        VAR68,
        &VAR51,
        &VAR72);
    VAR71->FUN21(VAR28.VAR73);
    VAR74.FUN8(new FUN22(VAR75, VAR71, new FUN23()));
  }
  bool VAR76 = FUN24(VAR28);
  if (VAR76) {
    if (FUN25()) {
      FUN25()->FUN26(
          VAR21::VAR77::VAR78, VAR14::FUN27());
    }
    VAR39 = true;
    VAR79 FUN28(VAR80, FUN29());
    VAR81.FUN30()->FUN31(VAR32);
    VAR81.FUN30()->FUN9(this);
  }
  FUN32(VAR1::VAR82, VAR83,
                    FUN33(
                        FUN6(VAR43.FUN7()),
                        VAR76));
  if (!VAR76 && VAR47 == VAR65)
    return false;
  VAR49->FUN9(this);
  return VAR76;
}