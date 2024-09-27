void VAR1::FUN1(
    const VAR2::VAR3& VAR4,
    const VAR2::VAR5& VAR6,
    unsigned VAR7,
    const VAR2::VAR5& VAR8) {
  VAR9::LogSeverity VAR10 = VAR9::VAR11;
  switch (VAR4.VAR12) {
    case VAR2::VAR13::VAR14::VAR15:
      VAR10 = VAR9::VAR11;
      break;
    case VAR2::VAR13::VAR14::VAR16:
      VAR10 = VAR9::VAR17;
      break;
    case VAR2::VAR13::VAR14::VAR18:
      VAR10 = VAR9::VAR19;
      break;
    case VAR2::VAR13::VAR14::VAR20:
      VAR10 = VAR9::VAR21;
      break;
    default:
      VAR10 = VAR9::VAR11;
  }
  if (FUN2(VAR6)) {
    for (auto& VAR22 : VAR23) {
      VAR22.FUN3(
          VAR4.VAR24.FUN4(), VAR6.FUN4(), VAR8.FUN4(),
          VAR7, static_cast<VAR25>(VAR10));
     }
   }
  FUN5()->FUN1(VAR4.VAR12, VAR4.VAR24.FUN4(),
                                         static_cast<VAR26>(VAR7),
                                         VAR6.FUN4());
 }