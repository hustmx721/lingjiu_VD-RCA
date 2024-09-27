void VAR1::FUN1() {
  if (VAR2) {
     VAR2->FUN2(false);
     VAR2 = NULL;
   }
  delete this;
 }