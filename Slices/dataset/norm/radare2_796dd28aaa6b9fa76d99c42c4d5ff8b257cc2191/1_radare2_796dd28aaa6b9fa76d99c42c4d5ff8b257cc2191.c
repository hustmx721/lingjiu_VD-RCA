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
#ifndef VAR19
	  char VAR3[VAR16.VAR18 + 1];
#else
 	  char * VAR3 = FUN5 (VAR16.VAR18 + 1);
#VAR20
 	  struct VAR8 *VAR21;
 	  enum grub_fshelp_filetype VAR22 = VAR23;
 	  FUN4 (VAR9, 0, 0, 0,
 			       VAR7 + sizeof (struct VAR24),
 			       VAR16.VAR18, VAR3);
	  if (VAR14)
 	    return 0;
 	  VAR21 = FUN5 (sizeof (struct VAR8));
	  if (! VAR21)
 	    return 0;
 	  VAR21->VAR11 = VAR9->VAR11;
 	  VAR21->VAR12 = FUN3 (VAR16.VAR13);
	  VAR3[VAR16.VAR18] = VAR25;
	  if (VAR16.VAR4 != VAR26)
	    {
	      VAR21->VAR10 = 0;
	      if (VAR16.VAR4 == VAR27)
		VAR22 = VAR28;
	      else if (VAR16.VAR4 == VAR29)
		VAR22 = VAR30;
	      else if (VAR16.VAR4 == VAR31)
		VAR22 = VAR32;
	    }
	  else
	    {
 	      FUN2 (VAR9->VAR11,
                                     FUN3 (VAR16.VAR13),
 				    &VAR21->VAR13);
	      if (VAR14)
		{
 		  FUN6 (VAR21);
 		  return 0;
 		}
	      VAR21->VAR10 = 1;
	      if ((FUN7 (VAR21->VAR13.VAR33)
		   & VAR34) == VAR35)
		VAR22 = VAR28;
	      else if ((FUN7 (VAR21->VAR13.VAR33)
			& VAR34) == VAR36)
		VAR22 = VAR30;
	      else if ((FUN7 (VAR21->VAR13.VAR33)
			& VAR34) == VAR37)
 		VAR22 = VAR32;
 	    }
	  if (FUN8 (VAR3, VAR22, VAR21, VAR6))
 	    return 1;
 	}
       VAR7 += FUN7 (VAR16.VAR17);
    }
  return 0;
}