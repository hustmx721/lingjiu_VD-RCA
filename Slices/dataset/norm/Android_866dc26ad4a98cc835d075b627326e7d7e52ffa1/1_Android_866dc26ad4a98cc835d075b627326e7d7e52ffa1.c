VAR1::VAR2 FUN1(const VAR3& VAR4) {
 ssize_t VAR5 = FUN2(VAR4.FUN3(), VAR4.FUN4());
 if (VAR5 <= 0) {
 return {};
     }
     VAR1::string VAR6;
     VAR6.FUN5(VAR5);
    FUN6(VAR4.FUN3(), VAR4.FUN4(), &*VAR6.FUN7());
     return VAR6;
 }