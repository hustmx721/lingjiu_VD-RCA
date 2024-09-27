int disrsi_(

  int       stream,
  int      *negate,
  unsigned *value,
  unsigned  count)

  {
  int  c;
  unsigned locval;
  unsigned ndigs;
  char  *cp;
  char  scratch[DIS_BUFSIZ+1];

  assert(negate != NULL);
  assert(value != NULL);
  assert(count);
  assert(stream >= 0);
  assert(dis_getc != NULL);
  assert(dis_gets != NULL);

  memset(scratch, 0, DIS_BUFSIZ+1);
   if (dis_umaxd == 0)
     disiui_();
 
   switch (c = (*dis_getc)(stream))
     {
 
    case '-':

    case '+':

      *negate = c == '-';

      if ((*dis_gets)(stream, scratch, count) != (int)count)
        {
        return(DIS_EOD);
        }

      if (count >= dis_umaxd)
        {
        if (count > dis_umaxd)
          goto overflow;

        if (memcmp(scratch, dis_umax, dis_umaxd) > 0)
          goto overflow;
        }

      cp = scratch;

      locval = 0;

      do
        {
        if (((c = *cp++) < '0') || (c > '9'))
          {
          return(DIS_NONDIGIT);
          }

        locval = 10 * locval + c - '0';
        }
      while (--count);

      *value = locval;

      return (DIS_SUCCESS);

      break;

    case '0':

      return (DIS_LEADZRO);

      break;

    case '1':

    case '2':

    case '3':

    case '4':

    case '5':

    case '6':

    case '7':

    case '8':

    case '9':

      ndigs = c - '0';

      if (count > 1)
        {
        if ((*dis_gets)(stream, scratch + 1, count - 1) != (int)count - 1)
          {
          return(DIS_EOD);
          }

        cp = scratch;

        if (count >= dis_umaxd)
          {
          if (count > dis_umaxd)
            break;

          *cp = c;

          if (memcmp(scratch, dis_umax, dis_umaxd) > 0)
            break;
          }

        while (--count)
          {
          if (((c = *++cp) < '0') || (c > '9'))
            {
            return(DIS_NONDIGIT);
            }

          ndigs = 10 * ndigs + c - '0';
          }
        }    /* END if (count > 1) */

      return(disrsi_(stream, negate, value, ndigs));

      /*NOTREACHED*/

      break;

    case - 1:

      return(DIS_EOD);

      /*NOTREACHED*/

      break;

    case -2:

      return(DIS_EOF);

      /*NOTREACHED*/

      break;

    default:

      return(DIS_NONDIGIT);

      /*NOTREACHED*/

      break;
    }

  *negate = FALSE;

overflow:

  *value = UINT_MAX;

  return(DIS_OVERFLOW);
  }  /* END disrsi_() */
