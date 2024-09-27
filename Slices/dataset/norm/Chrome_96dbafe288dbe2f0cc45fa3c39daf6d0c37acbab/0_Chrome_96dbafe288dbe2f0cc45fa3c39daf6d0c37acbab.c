FUN1(xmlXPathParserContextPtr VAR1, int VAR2){
    static char VAR3;
    xmlNodePtr VAR4 = NULL;
     xmlXPathObjectPtr VAR5 = NULL;
     long VAR6;
     xmlChar VAR7[30];
     if (VAR2 == 0) {
 	VAR4 = VAR1->VAR8->VAR9;
    } else if (VAR2 == 1) {
	xmlNodeSetPtr VAR10;
	int VAR11, VAR12;
	if ((VAR1->VAR13 == NULL) || (VAR1->VAR13->VAR14 != VAR15)) {
	    VAR1->VAR16 = VAR17;
	    FUN2(FUN3(VAR1), NULL, NULL,
		VAR18);
	    return;
	}
	VAR5 = FUN4(VAR1);
	VAR10 = VAR5->VAR19;
	if ((VAR10 == NULL) || (VAR10->VAR20 <= 0)) {
	    FUN5(VAR5);
	    FUN6(VAR1, FUN7(VAR18));
	    return;
	}
	VAR4 = VAR10->VAR21[0];
	for (VAR11 = 1;VAR11 < VAR10->VAR20;VAR11++) {
	    VAR12 = FUN8(VAR4, VAR10->VAR21[VAR11]);
	    if (VAR12 == -1)
	        VAR4 = VAR10->VAR21[VAR11];
	}
    } else {
	FUN2(FUN3(VAR1), NULL, NULL,
		VAR18, VAR2);
 	VAR1->VAR16 = VAR22;
 	return;
     }
     if (VAR5)
         FUN5(VAR5);
     VAR6 = (long)((char *)VAR4 - (char *)&VAR3);
     if (VAR6 >= 0) {
      snprintf((char *)VAR7, sizeof(VAR7), VAR18, VAR6);
     } else {
      snprintf((char *)VAR7, sizeof(VAR7), VAR18, -VAR6);
     }
     FUN6(VAR1, FUN9(VAR7));
 }