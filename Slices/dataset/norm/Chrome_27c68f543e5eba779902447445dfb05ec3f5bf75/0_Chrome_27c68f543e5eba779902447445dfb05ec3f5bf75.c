bool VAR1::VAR2::FUN1(
    const VAR3<VAR4>& VAR5,
    const VAR6::VAR7* VAR8,
    const VAR3<VAR4>& VAR9,
    const VAR3<VAR4>& VAR10,
    const VAR3<VAR4>& VAR11) {
  VAIQMatrixBufferVP8 VAR12;
  memset(&VAR12, 0, sizeof(VAR13));
  const VAR6::VAR14& VAR15 = VAR8->VAR16;
  const VAR6::VAR17& VAR18 = VAR8->VAR19;
  static_assert(
      FUN2(VAR12.VAR20) == VAR6::VAR21,
      VAR22);
  for (size_t VAR23 = 0; VAR23 < VAR6::VAR21; ++VAR23) {
    int VAR24 = VAR18.VAR25;
    if (VAR15.VAR26) {
      if (VAR15.VAR27 ==
          VAR6::VAR14::VAR28)
        VAR24 = VAR15.VAR29[VAR23];
      else
        VAR24 += VAR15.VAR29[VAR23];
    }
#VAR30 FUN3(VAR24) VAR31::FUN4(VAR31::FUN5(VAR24, 0), 127)
    static_assert(FUN2(VAR12.VAR20[VAR23]) == 6,
                  VAR22);
    VAR12.VAR20[VAR23][0] = FUN3(VAR24);
    VAR12.VAR20[VAR23][1] = FUN3(VAR24 + VAR18.VAR32);
    VAR12.VAR20[VAR23][2] = FUN3(VAR24 + VAR18.VAR33);
    VAR12.VAR20[VAR23][3] = FUN3(VAR24 + VAR18.VAR34);
    VAR12.VAR20[VAR23][4] = FUN3(VAR24 + VAR18.VAR35);
    VAR12.VAR20[VAR23][5] = FUN3(VAR24 + VAR18.VAR36);
#undef VAR37
  }
  if (!VAR38->FUN6(VAR39,
                                    sizeof(VAR13),
                                    &VAR12))
    return false;
  VAProbabilityDataBufferVP8 VAR40;
  memset(&VAR40, 0, sizeof(VAR41));
  const VAR6::VAR42& VAR43 = VAR8->VAR44;
  FUN7(VAR40.VAR45, VAR43.VAR46);
  if (!VAR38->FUN6(VAR47,
                                    sizeof(VAR41),
                                    &VAR40))
    return false;
  VAPictureParameterBufferVP8 VAR48;
  memset(&VAR48, 0, sizeof(VAR49));
  VAR48.VAR50 = VAR8->VAR51;
  VAR48.VAR52 = VAR8->VAR53;
  if (VAR9) {
    VAR3<VAR54> VAR55 =
        FUN8(VAR9);
    VAR48.VAR56 = VAR55->FUN9()->FUN10();
  } else {
    VAR48.VAR56 = VAR57;
  }
  if (VAR10) {
    VAR3<VAR54> VAR58 =
        FUN8(VAR10);
    VAR48.VAR59 = VAR58->FUN9()->FUN10();
  } else {
    VAR48.VAR59 = VAR57;
  }
  if (VAR11) {
    VAR3<VAR54> VAR60 =
        FUN8(VAR11);
    VAR48.VAR61 = VAR60->FUN9()->FUN10();
  } else {
    VAR48.VAR61 = VAR57;
  }
  VAR48.VAR62 = VAR57;
   const VAR6::VAR63& VAR64 = VAR8->VAR65;
#VAR30 FUN11(VAR66, VAR67) VAR48.VAR68.VAR69.VAR66 = (VAR67);
   FUN11(VAR70, VAR8->FUN12() ? 0 : 1);
   FUN11(VAR71, VAR8->VAR71);
   FUN11(VAR26, VAR15.VAR26);
  FUN11(VAR72,
                VAR15.VAR72);
  FUN11(VAR73,
                VAR15.VAR73);
  FUN11(VAR74, VAR64.VAR75);
  FUN11(VAR76, VAR64.VAR76);
  FUN11(VAR77, VAR64.VAR77);
  FUN11(VAR78, VAR64.VAR78);
  FUN11(VAR79, VAR8->VAR79);
  FUN11(VAR80, VAR8->VAR80);
  FUN11(VAR81, VAR8->VAR82);
  FUN11(VAR83, VAR64.VAR84 == 0);
#undef VAR85
  FUN7(VAR48.VAR86, VAR15.VAR87);
  static_assert(FUN2(VAR15.VAR88) ==
                    FUN2(VAR48.VAR89),
                VAR22);
  for (size_t VAR23 = 0; VAR23 < FUN2(VAR15.VAR88); ++VAR23) {
    int VAR90 = VAR64.VAR84;
    if (VAR15.VAR26) {
      if (VAR15.VAR27 ==
          VAR6::VAR14::VAR28)
        VAR90 = VAR15.VAR88[VAR23];
      else
        VAR90 += VAR15.VAR88[VAR23];
    }
    VAR90 = VAR31::FUN4(VAR31::FUN5(VAR90, 0), 63);
    VAR48.VAR89[VAR23] = VAR90;
  }
  static_assert(FUN2(VAR64.VAR91) ==
                    FUN2(VAR48.VAR92) &&
                FUN2(VAR64.VAR93) ==
                    FUN2(VAR48.VAR94) &&
                FUN2(VAR64.VAR91) ==
                    FUN2(VAR64.VAR93),
                VAR22);
  for (size_t VAR23 = 0; VAR23 < FUN2(VAR64.VAR91); ++VAR23) {
    VAR48.VAR92[VAR23] = VAR64.VAR91[VAR23];
     VAR48.VAR94[VAR23] = VAR64.VAR93[VAR23];
   }
#VAR30 FUN13(VAR66) VAR48.VAR66 = VAR8->VAR66;
   FUN13(VAR95);
   FUN13(VAR96);
   FUN13(VAR97);
  FUN13(VAR98);
#undef VAR99
  FUN7(VAR48.VAR100, VAR43.VAR100);
  FUN7(VAR48.VAR101, VAR43.VAR101);
  FUN7(VAR48.VAR102, VAR43.VAR102);
  VAR48.VAR103.VAR104 = VAR8->VAR105;
  VAR48.VAR103.VAR106 = VAR8->VAR107;
   VAR48.VAR103.VAR108 = VAR8->VAR109;
   if (!VAR38->FUN6(VAR110,
                                    sizeof(VAR49),
                                    &VAR48))
     return false;
   VASliceParameterBufferVP8 VAR111;
  memset(&VAR111, 0, sizeof(VAR112));
   VAR111.VAR113 = VAR8->VAR114;
   VAR111.VAR115 = VAR8->VAR116;
   VAR111.VAR117 = VAR118;
  VAR111.VAR119 = VAR8->VAR120;
  VAR111.VAR121 = VAR8->VAR122 + 1;
  VAR111.VAR123[0] =
      VAR8->VAR124 - ((VAR8->VAR120 + 7) / 8);
  for (size_t VAR23 = 0; VAR23 < VAR8->VAR122; ++VAR23)
    VAR111.VAR123[VAR23 + 1] = VAR8->VAR125[VAR23];
  if (!VAR38->FUN6(VAR126,
                                    sizeof(VAR112),
                                    &VAR111))
    return false;
  void* VAR127 = const_cast<VAR128*>(VAR8->VAR129);
  if (!VAR38->FUN6(VAR130,
                                    VAR8->VAR114,
                                    VAR127))
    return false;
  VAR3<VAR54> VAR131 =
      FUN8(VAR5);
  return VAR132->FUN14(VAR131);
}