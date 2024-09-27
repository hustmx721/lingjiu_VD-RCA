void VAR1::FUN1(const VAR2& VAR3,
                                const VAR4& VAR5) {
  for (const auto& VAR6 : VAR3) {
    const auto& VAR7 = VAR6.VAR8;
    bool VAR9 = false;
    for (const auto& VAR10 : VAR5.FUN2(VAR6)) {
      FUN3(VAR10.FUN4());
      auto VAR11 =
          static_cast<const VAR12&>(VAR10).FUN5();
       if ((!VAR11 || VAR11->FUN6() == 0) &&
          VAR7.FUN7() == VAR13::FUN8()) {
         continue;
       }
      FUN9();
      if (!VAR9) {
        FUN10(VAR6);
        VAR9 = true;
      }
      VAR14.FUN11();
      if (VAR11 && VAR11->FUN6() != 0)
        VAR14.VAR15<VAR16::VAR17>(VAR18::move(VAR11));
      VAR14.FUN12(
          VAR19.FUN13(VAR10.FUN14()));
    }
    FUN15(VAR6.VAR20, VAR7.FUN16());
  }
}