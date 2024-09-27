  FUN1( FT_Memory   VAR1,
                           VAR2*  VAR3,
                           FT_UInt     VAR4,
                           FT_UInt     VAR5 )
  {
    FT_Error        VAR6;
     int             VAR7;
     int             VAR8;
     FT_UInt         VAR9;
    FT_UInt         VAR10, VAR11, VAR12;
     unsigned char*  VAR13 = NULL;
    VAR11  = VAR3->VAR11;
    VAR12 = VAR3->VAR14;
    VAR7  = VAR3->VAR7;
    if ( VAR7 < 0 )
      VAR7 = -VAR7;
    switch ( VAR3->VAR15 )
    {
    case VAR16:
      VAR9       = 1;
      VAR8 = ( VAR11 + VAR4 + 7 ) >> 3;
      break;
    case VAR17:
      VAR9       = 2;
      VAR8 = ( VAR11 + VAR4 + 3 ) >> 2;
      break;
    case VAR18:
      VAR9       = 4;
      VAR8 = ( VAR11 + VAR4 + 1 ) >> 1;
      break;
    case VAR19:
    case VAR20:
    case VAR21:
      VAR9       = 8;
      VAR8 = ( VAR11 + VAR4 );
      break;
    default:
      return FUN2( VAR22 );
    }
     if ( VAR5 == 0 && VAR8 <= VAR7 )
     {
      FT_UInt  VAR23 = VAR7 * 8;
      FT_UInt  VAR24  = ( VAR11 + VAR4 ) * VAR9;
       if ( VAR24 < VAR23 )
       {
         VAR25*  VAR26  = VAR3->VAR13 + ( VAR24 >> 3 );
         VAR25*  VAR27   = VAR3->VAR13 + VAR7;
        FT_UInt   VAR28 = VAR24 & 7;
         FT_UInt   VAR29  = 0xFF00U >> VAR28;
        FT_UInt   VAR30 = VAR12;
         for ( ; VAR30 > 0; VAR30--, VAR26 += VAR7, VAR27 += VAR7 )
        {
          VAR25*  write = VAR26;
          if ( VAR28 > 0 )
          {
            write[0] = (VAR25)( write[0] & VAR29 );
            write++;
          }
          if ( write < VAR27 )
            FUN3( write, VAR27 - write );
        }
      }
      return VAR31;
    }
    if ( FUN4( VAR13, VAR8, VAR3->VAR14 + VAR5 ) )
      return VAR6;
     if ( VAR3->VAR7 > 0 )
     {
      FT_UInt  VAR32 = ( VAR11 * VAR9 + 7 ) >> 3;
       for ( VAR10 = 0; VAR10 < VAR3->VAR14; VAR10++ )
        FUN5( VAR13 + VAR8 * ( VAR5 + VAR10 ),
                     VAR3->VAR13 + VAR7 * VAR10, VAR32 );
     }
     else
     {
      FT_UInt  VAR32 = ( VAR11 * VAR9 + 7 ) >> 3;
       for ( VAR10 = 0; VAR10 < VAR3->VAR14; VAR10++ )
        FUN5( VAR13 + VAR8 * VAR10,
                     VAR3->VAR13 + VAR7 * VAR10, VAR32 );
    }
    FUN6( VAR3->VAR13 );
    VAR3->VAR13 = VAR13;
    if ( VAR3->VAR7 < 0 )
      VAR8 = -VAR8;
    VAR3->VAR7 = VAR8;
    return VAR31;
  }