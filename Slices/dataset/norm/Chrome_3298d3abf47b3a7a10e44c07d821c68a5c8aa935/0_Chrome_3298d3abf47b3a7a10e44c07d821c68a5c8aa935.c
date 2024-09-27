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
  if (!VAR16.FUN11()) {
    FUN12(VAR36, VAR21,
                      VAR37
                      VAR37);
    return;
  }
   bool VAR38 =
       VAR16 == FUN13() ||
       VAR16 ==
          FUN14(0, 0, VAR14->FUN7(), VAR14->FUN8());
  const bool VAR39 = VAR4 == VAR25 &&
                                       VAR38 &&
                                       VAR17 == 1 && VAR40 == VAR5 &&
                                       FUN15(VAR8, VAR9);
  if (VAR39) {
    FUN16(VAR10, 0);
    FUN16(VAR11, 0);
    FUN16(VAR12, 0);
    if (VAR14->FUN17(
            FUN18(), VAR5, VAR23->FUN19(), VAR7, VAR8,
            VAR9, VAR6, VAR41, VAR42,
            VAR32, VAR34)) {
      VAR23->FUN20(VAR31);
      return;
    }
  }
  if (VAR38) {
    FUN21(
        this, VAR42 || VAR41);
    if (VAR14->FUN22(
            static_cast<VAR30::VAR43>(VAR4),
            VAR5, FUN18(), VAR23->FUN19(), VAR6,
            FUN23(VAR7, VAR9), VAR8, VAR9,
            VAR10, VAR11, VAR12, VAR42,
            VAR41 &&
                VAR44 == VAR45)) {
      VAR23->FUN24();
      return;
    }
  }
  if (VAR39) {
    VAR46::VAR47<VAR48> VAR49 =
        VAR50::FUN25(new FUN26(
            FUN27(VAR14->FUN7(), VAR14->FUN8())));
    if (VAR49->FUN11()) {
      VAR46::VAR47<VAR51> FUN28(
          VAR51::FUN29(VAR46::move(VAR49)));
      if (VAR52) {
        VAR14->FUN30(
            VAR52->FUN31(),
            FUN14(0, 0, VAR14->FUN7(), VAR14->FUN8()), nullptr,
            VAR32, VAR34);
        FUN32(VAR5, VAR6, VAR7, VAR14->FUN7(),
                       VAR14->FUN8(), 0, VAR8, VAR9, nullptr);
        if (VAR52->FUN33(
                FUN34(VAR4), FUN18(), VAR5,
                VAR23->FUN19(), VAR41, VAR42,
                FUN35(0, 0),
                FUN14(0, 0, VAR14->FUN7(), VAR14->FUN8()))) {
          VAR23->FUN20(VAR31);
          return;
        }
      }
    }
  }
  VAR53<VAR54> VAR55 =
      FUN36(VAR14, VAR32, VAR34);
  if (!VAR55)
    return;
  FUN22(VAR4, VAR5, VAR6, VAR7, VAR10, VAR11,
               VAR12, VAR8, VAR9, VAR55.FUN37(),
               VAR56::VAR57, VAR42,
               VAR41, VAR16, VAR17,
               VAR18);
  VAR23->FUN20(VAR31);
}