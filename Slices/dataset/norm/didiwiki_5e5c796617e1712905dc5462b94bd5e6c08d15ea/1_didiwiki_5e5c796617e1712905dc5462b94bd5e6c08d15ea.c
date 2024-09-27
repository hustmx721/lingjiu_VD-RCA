 FUN1(VAR1  *VAR2,
 		      VAR3 *VAR4,
		      char         *VAR5)
{
  if (VAR5 != NULL && *VAR5 != VAR6)
    {
      if (!strcmp(VAR5, VAR7))
	{
	  char *VAR8 = FUN2(VAR2, VAR7);
 	  if (VAR8 == NULL)
 	    VAR8 = FUN3(VAR2);
	  if (VAR8 && (access(VAR8, VAR9) == 0))
 	    {
 	      FUN4(VAR4, VAR7, FUN5(VAR8));
 	      FUN6(VAR4);
	      return;
	    }
	}
      else if (!strcmp(VAR5, VAR7))
	{
	  char *VAR10 = NULL, *VAR8 = NULL;
 	  if( ( (VAR10 = FUN2(VAR2, VAR7)) != NULL)
 	      && ( (VAR8 = FUN2(VAR2, VAR7)) != NULL))
 	    {
	      FUN7(VAR8, VAR10);
 	      FUN4(VAR4, VAR7);
 	      FUN6(VAR4);
 	      return;
 	    }
 	}
       else if (!strcmp(VAR5, VAR7))
 	{
	  char *VAR8 = FUN2(VAR2, VAR7);
 	  if (VAR8 == NULL)
 	    VAR8 = FUN3(VAR2);
	  if (VAR8 && (unlink(VAR8) > 0))
 	    {
 	      FUN4(VAR4, VAR7);
 	      FUN6(VAR4);
	      return;
	    }
	}
      else if (!strcmp(VAR5, VAR7))
	{
	  char *VAR8 = FUN2(VAR2, VAR7);
 	  if (VAR8 == NULL)
 	    VAR8 = FUN3(VAR2);
	  if (VAR8 && (access(VAR8, VAR9) == 0))
 	    {
 	      FUN4(VAR4, VAR7);
 	      FUN6(VAR4);
	      return;
	    }
	}
      else if (!strcmp(VAR5, VAR7) || !strcmp(VAR5, VAR7))
	{
	  VAR11 **VAR12 = NULL;
	  int            VAR13, VAR14;
	  char          *VAR15 = FUN2(VAR2, VAR7);
	  if (VAR15 == NULL)
	    VAR15 = FUN3(VAR2);
	  VAR12 = FUN8(&VAR13, VAR15);
	  if (VAR12)
	    {
	      for (VAR14=0; VAR14<VAR13; VAR14++)
		{
		  struct VAR16   *VAR17;
		  char   VAR18[64];
		  VAR17 = localtime(&VAR12[VAR14]->VAR19);
		  strftime(VAR18, sizeof(VAR18), VAR7, VAR17);
		  FUN4(VAR4, VAR7, VAR12[VAR14]->VAR20, VAR18);
		}
	      FUN6(VAR4);
	      return;
	    }
	}
    }
  FUN9(VAR4, 500, VAR7);
  FUN4(VAR4, VAR7);
  FUN6(VAR4);
  return;
}