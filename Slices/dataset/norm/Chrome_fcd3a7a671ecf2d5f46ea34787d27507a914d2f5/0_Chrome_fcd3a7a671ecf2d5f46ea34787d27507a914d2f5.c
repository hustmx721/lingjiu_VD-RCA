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
     VAR29::VAR30* VAR29,
     const VAR8::VAR9& VAR31,
     TestingMode VAR32,
    VAR33* VAR34,
    VAR35* VAR36,
    ReportUnrecoverableErrorFunction VAR37) {
  FUN2(!VAR38);
  FUN3(VAR39.FUN4());
  FUN5(1) << VAR40;
  VAR41 = FUN6(VAR42.FUN7());
  VAR43 = VAR16;
  VAR44 = VAR20;
   VAR45 = VAR25;
   VAR46 = VAR32;
   VAR47.FUN8(VAR29);
   FUN9(&VAR48);
  FUN10(VAR7);
  FUN9(&VAR49);
  VAR50 = VAR4.FUN11(
      VAR51::VAR52::VAR53);
  VAR54 = VAR34;
  VAR55 = VAR36;
  VAR56 = VAR37;
  VAR57.VAR58.FUN8(
      new VAR51::FUN12(VAR54,
                              VAR55,
                              VAR56));
  VAR59.FUN8(new FUN13(
      VAR10, VAR11, VAR12, VAR26, VAR18));
  VAR60::VAR61::FUN14(this);
  VAR62 = true;
  FUN15()->FUN16(this);
  if (VAR46 == VAR63) {
    FUN5(1) << VAR40;
    VAR8::VAR64<VAR65*> VAR66;
    VAR66.FUN17(&VAR67);
    VAR66.FUN17(this);
    VAR68* VAR69 = new FUN18(
        VAR59.FUN19(),
        FUN20(),
        VAR20,
        VAR23,
        VAR66,
        &VAR49,
        &VAR70);
    VAR69->FUN21(VAR28.VAR71);
    VAR72.FUN8(new FUN22(VAR73, VAR69, new FUN23()));
  }
  bool VAR74 = FUN24(VAR28);
  if (VAR74) {
    if (FUN25()) {
      FUN25()->FUN26(
          VAR21::VAR75::VAR76, VAR14::FUN27());
    }
    VAR38 = true;
    VAR77 FUN28(VAR78, FUN29());
    VAR79.FUN30()->FUN31(VAR31);
    VAR79.FUN30()->FUN9(this);
  }
  FUN32(VAR1::VAR80, VAR81,
                    FUN33(
                        FUN6(VAR42.FUN7()),
                        VAR74));
  if (!VAR74 && VAR46 == VAR63)
    return false;
  VAR47->FUN9(this);
  return VAR74;
}