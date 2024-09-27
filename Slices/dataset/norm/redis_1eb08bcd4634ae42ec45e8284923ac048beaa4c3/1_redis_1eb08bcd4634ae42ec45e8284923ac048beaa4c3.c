static int FUN1 (VAR1 *VAR2, const char **VAR3, int VAR4) {
   if (!FUN2(**VAR3))
     return VAR4;
   else {
     int VAR5 = 0;
     do {
      if (VAR5 > (VAR6 / 10) || VAR5 * 10 > (VAR6 - (**VAR3 - VAR7)))
        FUN3(VAR2, VAR8);
       VAR5 = VAR5*10 + *((*VAR3)++) - VAR7;
     } while (FUN2(**VAR3));
     return VAR5;
  }
}