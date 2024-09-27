 void VAR1::FUN1(int VAR2,
                               VAR3::VAR4<int> VAR5,
                               VAR3::VAR4<int> VAR6) {
   if (VAR6.FUN2() && !VAR7[VAR6.FUN3()]) {
    const VAR8* VAR9 =
        VAR10->FUN4(VAR6.FUN3());
    auto VAR11 = VAR12::VAR13<VAR14>(VAR9->FUN5());
     VAR11->FUN6();
     FUN7(VAR11.FUN8());
     VAR7[VAR6.FUN3()] = VAR12::move(VAR11);
  }
  if (VAR5.FUN2() &&
      VAR10->FUN9(VAR5.FUN3()).FUN10() == 0) {
    VAR7.FUN11(VAR5.FUN3());
  }
  FUN12();
  FUN13();
}