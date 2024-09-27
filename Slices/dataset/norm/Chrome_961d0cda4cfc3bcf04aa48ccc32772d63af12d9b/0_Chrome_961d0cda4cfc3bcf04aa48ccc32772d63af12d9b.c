 void VAR1::FUN1() {
  VAR2* VAR3 =
      VAR4
          ? VAR4
          : VAR2::FUN2(VAR5);
  FUN3(VAR3);
  VAR3->FUN1();
 }