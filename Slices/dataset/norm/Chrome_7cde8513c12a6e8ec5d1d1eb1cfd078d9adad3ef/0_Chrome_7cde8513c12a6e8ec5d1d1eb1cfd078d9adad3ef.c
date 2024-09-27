void VAR1::FUN1(
void VAR1::FUN2(
     VAR2::MaliciousContentStatus VAR3,
    VAR1::VAR4* VAR5,
     VAR6::VAR7* VAR8) {
   switch (VAR3) {
     case VAR2::VAR9:
       FUN3();
       break;
     case VAR2::VAR10:
      *VAR5 = VAR1::VAR11;
       *VAR8 = VAR12::FUN4(VAR13);
       break;
     case VAR2::VAR14:
      *VAR5 = VAR1::VAR15;
       *VAR8 =
           VAR12::FUN4(VAR16);
       break;
     case VAR2::VAR17:
      *VAR5 = VAR1::VAR18;
       *VAR8 =
           VAR12::FUN4(VAR19);
       break;
     case VAR2::VAR20:
 #if FUN5(VAR21)
      *VAR5 = VAR1::VAR22;
       *VAR8 = VAR23
                      ? VAR23->FUN6(
                           VAR24::VAR25)
                     : VAR6::FUN7();
#VAR26
       break;
     case VAR2::VAR27:
 #if FUN5(VAR21)
      *VAR5 = VAR1::VAR28;
       *VAR8 = VAR23
                      ? VAR23->FUN6(
                           VAR24::VAR29)
                     : VAR6::FUN7();
 #VAR26
       break;
     case VAR2::VAR30:
      *VAR5 = VAR1::VAR31;
       *VAR8 = VAR12::FUN4(VAR32);
       break;
   }
}