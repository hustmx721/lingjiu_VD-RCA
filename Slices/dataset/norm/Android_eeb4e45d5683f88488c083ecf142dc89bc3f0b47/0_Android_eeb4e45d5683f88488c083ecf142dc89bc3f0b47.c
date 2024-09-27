 long FUN1(VAR1 *VAR2,VAR3 *VAR4,
                             VAR5 *VAR6,int VAR7,int VAR8){
   if(VAR2->VAR9>0){
     VAR3 *VAR10 = VAR2->VAR11;
     int VAR12,VAR13;
     if (!VAR10) return -1;
     for(VAR12=0;VAR12<VAR7;){
       if(FUN2(VAR2,VAR6,VAR10,VAR8))return -1;
      for (VAR13=0;VAR13<VAR2->VAR14 && VAR12 < VAR7;VAR13++)
        VAR4[VAR12++]+=VAR10[VAR13];
     }
   }
   return 0;
 }