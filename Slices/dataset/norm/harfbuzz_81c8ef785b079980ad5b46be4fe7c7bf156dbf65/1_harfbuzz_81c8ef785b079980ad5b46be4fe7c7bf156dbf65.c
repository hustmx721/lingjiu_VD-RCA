static VAR1  FUN1( VAR2*    VAR3,
				     VAR4* VAR5,
				     HB_Buffer        VAR6,
				     HB_UShort         VAR7,
				     HB_UShort         VAR8,
				     int               VAR9 )
{
  HB_UShort        VAR10, VAR11, VAR12, VAR13, VAR14, class;
  HB_Fixed           VAR15, VAR16,
		   VAR17, VAR18;
  HB_Error         VAR19;
  VAR20*  VAR21 = VAR3->VAR21;
  VAR22* VAR23 = &VAR5->VAR24;
  VAR25*    VAR26;
  VAR27*   VAR28;
  VAR29*  VAR30;
  VAR31*       VAR32;
  VAR31*       VAR33;
  HB_Position    VAR34;
  FUN2(VAR9);
  if ( VAR8 != 0xFFFF && VAR8 < 1 )
    return VAR35;
  if ( VAR7 & VAR36 )
    return VAR35;
  if ( FUN3( VAR21->VAR37, FUN4(),
		       VAR7, &VAR14 ) )
    return VAR19;
  VAR19 = FUN5( &VAR23->VAR38, FUN6(),
			  &VAR12 );
  if ( VAR19 )
    return VAR19;
  if ( VAR6->VAR39 == 0 )
    return VAR35;
  VAR10 = 1;
  VAR11 = VAR6->VAR39 - 1;
  while ( VAR10 <= VAR6->VAR39 )
  {
    VAR19 = FUN7( VAR21->VAR37, FUN8( VAR11 ),
					&VAR14 );
    if ( VAR19 )
      return VAR19;
    if ( !( VAR14 == VAR40 || VAR14 & VAR41 ) )
      return VAR35;
    if ( VAR7 & VAR41 )
    {
      if ( VAR14 == (VAR7 & 0xFF00) )
        break;
    }
    else
      break;
    VAR10++;
     VAR11--;
   }
   VAR19 = FUN5( &VAR23->VAR42, FUN8( VAR11 ),
 			  &VAR13 );
   if ( VAR19 )
  if ( VAR12 >= VAR26->VAR43 )
    return FUN9(VAR44);
  class        = VAR26->VAR45[VAR12].VAR46;
  VAR32 = &VAR26->VAR45[VAR12].VAR47;
  if ( class >= VAR23->VAR48 )
    return FUN9(VAR44);
  VAR28 = &VAR23->VAR49;
  if ( VAR13 >= VAR28->VAR50 )
    return FUN9(VAR44);
  VAR30          = &VAR28->VAR51[VAR13];
  VAR33 = &VAR30->VAR52[class];
  VAR19 = FUN10( VAR3, VAR32, FUN6(),
		      &VAR15, &VAR16 );
  if ( VAR19 )
    return VAR19;
  VAR19 = FUN10( VAR3, VAR33, FUN8( VAR11 ),
		      &VAR17, &VAR18 );
  if ( VAR19 )
    return VAR19;
  VAR34 = FUN11( VAR6->VAR39 );
  VAR34->VAR53     = VAR17 - VAR15;
  VAR34->VAR54     = VAR18 - VAR16;
  VAR34->VAR55 = 0;
  VAR34->VAR56 = 0;
  VAR34->VAR57      = 1;
  (VAR6->VAR39)++;
  return VAR58;
}