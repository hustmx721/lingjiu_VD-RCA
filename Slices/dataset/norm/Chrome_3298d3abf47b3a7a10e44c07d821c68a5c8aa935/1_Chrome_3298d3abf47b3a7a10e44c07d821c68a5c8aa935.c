void VAR1::FUN1(
    const VAR2* VAR3,
    TexImageFunctionID VAR4,
    GLenum VAR5,
    GLint VAR6,
    GLint VAR7,
    GLenum VAR8,
    GLenum VAR9,
    GLint VAR10,
    GLint VAR11,
    GLint VAR12,
    VAR13* VAR14,
    const VAR15& VAR16,
    GLsizei VAR17,
    GLint VAR18,
    VAR19& VAR20) {
  const char* VAR21 = FUN2(VAR4);
  if (FUN3())
    return;
  if (!FUN4(VAR3, VAR21, VAR14,
                                VAR20))
    return;
  VAR22* VAR23 =
      FUN5(VAR21, VAR4, VAR5);
  if (!VAR23)
    return;
  TexImageFunctionType VAR24;
  if (VAR4 == VAR25 || VAR4 == VAR26)
    VAR24 = VAR27;
  else
    VAR24 = VAR28;
  if (!FUN6(VAR21, VAR24, VAR29,
                       VAR5, VAR6, VAR7, VAR14->FUN7(),
                       VAR14->FUN8(), 1, 0, VAR8, VAR9, VAR10,
                       VAR11, VAR12))
    return;
  VAR30::VideoFrameUploadMetadata VAR31 = {};
  int VAR32 = -1;
  VAR30::VAR33* VAR34 = nullptr;
  if (VAR35::FUN9()) {
    VAR32 = VAR23->FUN10();
     VAR34 = &VAR31;
   }
   bool VAR36 =
       VAR16 == FUN11() ||
       VAR16 ==
          FUN12(0, 0, VAR14->FUN7(), VAR14->FUN8());
  const bool VAR37 = VAR4 == VAR25 &&
                                       VAR36 &&
                                       VAR17 == 1 && VAR38 == VAR5 &&
                                       FUN13(VAR8, VAR9);
  if (VAR37) {
    FUN14(VAR10, 0);
    FUN14(VAR11, 0);
    FUN14(VAR12, 0);
    if (VAR14->FUN15(
            FUN16(), VAR5, VAR23->FUN17(), VAR7, VAR8,
            VAR9, VAR6, VAR39, VAR40,
            VAR32, VAR34)) {
      VAR23->FUN18(VAR31);
      return;
    }
  }
  if (VAR36) {
    FUN19(
        this, VAR40 || VAR39);
    if (VAR14->FUN20(
            static_cast<VAR30::VAR41>(VAR4),
            VAR5, FUN16(), VAR23->FUN17(), VAR6,
            FUN21(VAR7, VAR9), VAR8, VAR9,
            VAR10, VAR11, VAR12, VAR40,
            VAR39 &&
                VAR42 == VAR43)) {
      VAR23->FUN22();
      return;
    }
  }
  if (VAR37) {
    VAR44::VAR45<VAR46> VAR47 =
        VAR48::FUN23(new FUN24(
            FUN25(VAR14->FUN7(), VAR14->FUN8())));
    if (VAR47->FUN26()) {
      VAR44::VAR45<VAR49> FUN27(
          VAR49::FUN28(VAR44::move(VAR47)));
      if (VAR50) {
        VAR14->FUN29(
            VAR50->FUN30(),
            FUN12(0, 0, VAR14->FUN7(), VAR14->FUN8()), nullptr,
            VAR32, VAR34);
        FUN31(VAR5, VAR6, VAR7, VAR14->FUN7(),
                       VAR14->FUN8(), 0, VAR8, VAR9, nullptr);
        if (VAR50->FUN32(
                FUN33(VAR4), FUN16(), VAR5,
                VAR23->FUN17(), VAR39, VAR40,
                FUN34(0, 0),
                FUN12(0, 0, VAR14->FUN7(), VAR14->FUN8()))) {
          VAR23->FUN18(VAR31);
          return;
        }
      }
    }
  }
  VAR51<VAR52> VAR53 =
      FUN35(VAR14, VAR32, VAR34);
  if (!VAR53)
    return;
  FUN20(VAR4, VAR5, VAR6, VAR7, VAR10, VAR11,
               VAR12, VAR8, VAR9, VAR53.FUN36(),
               VAR54::VAR55, VAR40,
               VAR39, VAR16, VAR17,
               VAR18);
  VAR23->FUN18(VAR31);
}