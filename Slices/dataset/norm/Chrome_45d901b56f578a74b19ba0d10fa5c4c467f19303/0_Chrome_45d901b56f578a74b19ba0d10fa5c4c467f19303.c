 void VAR1::FUN1(int VAR2,
                               VAR3::VAR4<int> VAR5,
                               VAR3::VAR4<int> VAR6) {
  FUN2(VAR2)->FUN3(VAR6);
   if (VAR6.FUN4() && !VAR7[VAR6.FUN5()]) {
    auto VAR8 = VAR9::VAR10<VAR11>(this, VAR6.FUN5());
     VAR8->FUN6();
     FUN7(VAR8.FUN8());
     VAR7[VAR6.FUN5()] = VAR9::move(VAR8);
  }
  if (VAR5.FUN4() &&
      VAR12->FUN9(VAR5.FUN5()).FUN10() == 0) {
    VAR7.FUN11(VAR5.FUN5());
  }
  FUN12();
  FUN13();
}