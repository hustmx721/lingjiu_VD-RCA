FUN1 (grub_fshelp_node_t VAR1,
		       int (*VAR2) (const char *VAR3,
				    enum grub_fshelp_filetype VAR4,
				    grub_fshelp_node_t VAR5,
				    void *VAR6),
		       void *VAR6)
{
  unsigned int VAR7 = 0;
  struct VAR8 *VAR9 = (struct VAR8 *) VAR1;
  if (! VAR9->VAR10)
    {
      FUN2 (VAR9->VAR11, VAR9->VAR12, &VAR9->VAR13);
      if (VAR14)
	return 0;
    }
  if (VAR2)
  while (VAR7 < FUN3 (VAR9->VAR13.VAR15))
    {
      struct ext2_dirent VAR16;
      FUN4 (VAR9, NULL, NULL, 0, VAR7, sizeof (VAR16),
			   (char *) &VAR16);
      if (VAR14)
	return 0;
      if (VAR16.VAR17 == 0)
        return 0;
       if (VAR16.VAR18 != 0)
 	{
 	  char * VAR3 = FUN5 (VAR16.VAR18 + 1);
 	  struct VAR8 *VAR19;
 	  enum grub_fshelp_filetype VAR20 = VAR21;
if (!VAR3) {
break;
}
 	  FUN4 (VAR9, 0, 0, 0,
 			       VAR7 + sizeof (struct VAR22),
 			       VAR16.VAR18, VAR3);
	  if (VAR14) {
            free (VAR3);
 	    return 0;
	  }
 	  VAR19 = FUN5 (sizeof (struct VAR8));
	  if (! VAR19) {
            free (VAR3);
 	    return 0;
          }
 	  VAR19->VAR11 = VAR9->VAR11;
 	  VAR19->VAR12 = FUN3 (VAR16.VAR13);
	  VAR3[VAR16.VAR18] = VAR23;
	  if (VAR16.VAR4 != VAR24)
	    {
	      VAR19->VAR10 = 0;
	      if (VAR16.VAR4 == VAR25)
		VAR20 = VAR26;
	      else if (VAR16.VAR4 == VAR27)
		VAR20 = VAR28;
	      else if (VAR16.VAR4 == VAR29)
		VAR20 = VAR30;
	    }
	  else
	    {
 	      FUN2 (VAR9->VAR11,
                                     FUN3 (VAR16.VAR13),
 				    &VAR19->VAR13);
	      if (VAR14) {
                  free (VAR3);
 		  FUN6 (VAR19);
 		  return 0;
 		}
	      VAR19->VAR10 = 1;
	      if ((FUN7 (VAR19->VAR13.VAR31)
		   & VAR32) == VAR33)
		VAR20 = VAR26;
	      else if ((FUN7 (VAR19->VAR13.VAR31)
			& VAR32) == VAR34)
		VAR20 = VAR28;
	      else if ((FUN7 (VAR19->VAR13.VAR31)
			& VAR32) == VAR35)
 		VAR20 = VAR30;
 	    }
	  if (FUN8 (VAR3, VAR20, VAR19, VAR6)) {
            free (VAR3);
 	    return 1;
          }
          free (VAR3);
 	}
       VAR7 += FUN7 (VAR16.VAR17);
    }
  return 0;
}