   VAR1& FUN1(
      const VAR2* VAR3,
      const VAR4* VAR5 = VAR4::FUN2(),
      const VAR6* VAR7 = VAR6::FUN2()) {
    auto& VAR8 = VAR9.VAR10.FUN3().VAR11;
    VAR8.FUN4(VAR3);
    VAR8.FUN5(VAR5);
    VAR8.FUN6(VAR7);
     return *this;
   }