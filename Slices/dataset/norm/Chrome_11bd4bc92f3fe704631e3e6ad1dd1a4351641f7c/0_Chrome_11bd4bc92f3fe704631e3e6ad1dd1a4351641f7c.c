VAR1::VAR2::FUN1(
    const VAR3& VAR4,
    VAR5* VAR6,
    VAR7* VAR8) {
  const VAR9::VAR10& VAR11 = VAR4.VAR12;
  VAR9::VAR13<VAR9::VAR10> VAR14;
  size_t VAR15 = 0;
  size_t VAR16 = 0;
  bool VAR17 = false;
  bool VAR18 = false;
  VAR19::VAR20<VAR21> VAR22 = 0;
  VAR19::VAR20<VAR21> VAR23 = 0;
  VAR19::VAR20<VAR21> VAR24 = 0;
  VAR19::VAR20<VAR21> VAR25 = 0;
  for (VAR26<VAR27> VAR28 : VAR4.VAR29) {
    const VAR30& VAR31 = VAR28->FUN2();
    VAR30::Type VAR32 = VAR31.FUN3();
    uint64_t VAR33 = VAR31.FUN4();
    FUN5(VAR31);
    if (FUN6(VAR32)) {
      FUN7(0 + VAR30::VAR34, VAR31.FUN4());
      VAR17 = true;
      if (VAR18) {
        VAR35 = VAR36::VAR37;
        return;
      }
      VAR38 |=
          (VAR32 == VAR30::VAR39);
      VAR24 += VAR33;
      VAR22 += VAR33;
      VAR26<VAR40> VAR41 = new FUN8(
          VAR9::move(VAR28), VAR40::VAR42);
      VAR43.FUN9(VAR41);
      VAR44.FUN9(VAR41.FUN10());
      VAR6->FUN11(VAR9::move(VAR41));
      continue;
    }
    if (VAR32 == VAR30::VAR45) {
      VAR5* VAR46 = VAR8->FUN12(VAR31.FUN13());
      if (!VAR46 || VAR31.FUN13() == VAR11) {
        VAR35 = VAR36::VAR37;
        return;
      }
      if (FUN14(VAR46->FUN15())) {
        VAR35 = VAR36::VAR47;
        return;
      }
      if (VAR46->FUN16() == VAR30::VAR34) {
        VAR35 = VAR36::VAR37;
        return;
      }
      if (VAR14.FUN17(VAR31.FUN13()) ==
          VAR14.FUN18()) {
        VAR48.FUN9(
            VAR9::FUN19(VAR31.FUN13(), VAR46));
        VAR14.FUN20(VAR31.FUN13());
        if (FUN21(VAR46->FUN15())) {
          VAR16++;
        }
      }
      VAR33 = VAR33 == VAR30::VAR34 ? VAR46->FUN16()
                                                   : VAR31.FUN4();
      VAR22 += VAR33;
      if (VAR31.FUN22() == 0 && VAR33 == VAR46->FUN16()) {
        for (const auto& VAR49 : VAR46->FUN23()) {
          VAR6->FUN11(VAR49);
        }
        continue;
       }
      uint64_t VAR50;
      if (!VAR19::FUN24(VAR31.FUN22(), VAR33)
               .FUN25(&VAR50) ||
          VAR50 > VAR46->FUN16()) {
         VAR35 = VAR36::VAR37;
         return;
       }
      VAR51 FUN26(*VAR46, VAR31.FUN22(), VAR33);
      if (!VAR52.VAR53.FUN27() ||
          !VAR52.VAR54.FUN27()) {
        VAR35 = VAR36::VAR37;
        return;
      }
      VAR23 += VAR52.VAR54;
      if (VAR52.VAR55) {
        VAR56.FUN9(FUN28(VAR52.VAR55,
                                       VAR52.VAR57,
                                       VAR52.VAR58.FUN29()));
        VAR59.FUN9(VAR52.VAR58.FUN29());
      }
      if (VAR52.VAR60) {
        VAR56.FUN9(
            FUN28(VAR52.VAR60, 0, VAR52.VAR58.FUN30()));
        VAR59.FUN9(VAR52.VAR58.FUN30());
      }
      VAR25 += VAR52.VAR53;
      for (auto& VAR49 : VAR52.VAR58) {
        VAR6->FUN11(VAR9::move(VAR49));
      }
      continue;
    }
    VAR26<VAR40> VAR41;
    if (VAR3::FUN31(VAR31)) {
      VAR18 = true;
      if (VAR17) {
        VAR35 = VAR36::VAR37;
        return;
      }
      VAR38 = true;
      VAR41 = new FUN8(VAR9::move(VAR28),
                                       VAR40::VAR42);
      VAR43.FUN9(VAR41);
      VAR44.FUN9(VAR41.FUN10());
      VAR24 += VAR33;
    } else {
      VAR41 = new FUN8(
          VAR9::move(VAR28),
          VAR40::VAR61);
    }
    if (VAR33 == VAR30::VAR34)
      VAR15++;
    VAR22 += VAR33;
    VAR6->FUN11(VAR9::move(VAR41));
  }
  if (VAR15 > 1 && VAR4.VAR29.FUN32() > 1) {
    VAR35 = VAR36::VAR37;
    return;
  }
  if (!VAR22.FUN27() || !VAR23.FUN27() ||
      !VAR24.FUN27() ||
      !VAR25.FUN27()) {
    VAR35 = VAR36::VAR37;
    return;
  }
  VAR62 = VAR22.FUN33();
  VAR54 = VAR23.FUN33();
  VAR63 = VAR24.FUN33();
  VAR64 = VAR25.FUN33();
  VAR65 = VAR18 ? VAR66::VAR67
                                              : VAR66::VAR68;
  if (VAR63) {
    VAR35 = VAR36::VAR69;
  } else {
    VAR35 = VAR36::VAR70;
  }
}