FUN1(xmlXPathParserContextPtr VAR1, int VAR2){
    static char VAR3;
    xmlNodePtr VAR4 = NULL;
     xmlXPathObjectPtr VAR5 = NULL;
     long VAR6;
     xmlChar VAR7[30];
    xmlDocPtr VAR8;
     if (VAR2 == 0) {
 	VAR4 = VAR1->VAR9->VAR10;
    } else if (VAR2 == 1) {
	xmlNodeSetPtr VAR11;
	int VAR12, VAR13;
	if ((VAR1->VAR14 == NULL) || (VAR1->VAR14->VAR15 != VAR16)) {
	    VAR1->VAR17 = VAR18;
	    FUN2(FUN3(VAR1), NULL, NULL,
		VAR19);
	    return;
	}
	VAR5 = FUN4(VAR1);
	VAR11 = VAR5->VAR20;
	if ((VAR11 == NULL) || (VAR11->VAR21 <= 0)) {
	    FUN5(VAR5);
	    FUN6(VAR1, FUN7(VAR19));
	    return;
	}
	VAR4 = VAR11->VAR22[0];
	for (VAR12 = 1;VAR12 < VAR11->VAR21;VAR12++) {
	    VAR13 = FUN8(VAR4, VAR11->VAR22[VAR12]);
	    if (VAR13 == -1)
	        VAR4 = VAR11->VAR22[VAR12];
	}
    } else {
	FUN2(FUN3(VAR1), NULL, NULL,
		VAR19, VAR2);
 	VAR1->VAR17 = VAR23;
 	return;
     }
    if (VAR4->VAR15 != VAR24)
        VAR8 = VAR4->VAR8;
    else {
        xmlNsPtr VAR25 = (VAR26) VAR4;
        if (VAR25->VAR9 != NULL)
            VAR8 = VAR25->VAR9;
        else
            VAR8 = VAR1->VAR9->VAR8;
    }
     if (VAR5)
         FUN5(VAR5);
     VAR6 = (long)((char *)VAR4 - (char *)&VAR3);
     if (VAR6 >= 0) {
      sprintf((char *)VAR7, VAR19, VAR6);
     } else {
      sprintf((char *)VAR7, VAR19, -VAR6);
     }
     FUN6(VAR1, FUN9(VAR7));
 }