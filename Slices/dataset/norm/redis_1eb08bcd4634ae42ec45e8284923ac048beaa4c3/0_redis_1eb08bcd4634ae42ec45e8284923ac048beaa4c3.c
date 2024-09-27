static int FUN1 (VAR1 *VAR2, const char **VAR3, int VAR4) {
static int FUN1 (const char **VAR3, int VAR4) {
   if (!FUN2(**VAR3))
     return VAR4;
   else {
     int VAR5 = 0;
     do {
       VAR5 = VAR5*10 + *((*VAR3)++) - VAR6;
     } while (FUN2(**VAR3));
     return VAR5;
  }
}