OMX_ERRORTYPE VAR1::FUN1(VAR2 *VAR3)
{
    OMX_ERRORTYPE VAR4 = VAR5;
 struct v4l2_format VAR6;
 if (!VAR3) {
 return VAR7;
     }
     FUN2(VAR8);
     VAR3->VAR9.VAR9 = VAR10;
    VAR3->VAR11 = sizeof(VAR3);
     VAR3->VAR12    = VAR13;
     if (VAR14.VAR15.VAR16 > 0)
         VAR3->VAR17.VAR18.VAR19 = (VAR14.VAR15.VAR20 /
            VAR14.VAR15.VAR16) << 16;
 else {
        FUN3(VAR8);
 return VAR7;
 }
    memset(&VAR6, 0x0, sizeof(struct VAR21));
 if (0 == VAR3->VAR22) {
        VAR3->VAR23 =  VAR24;
        VAR3->VAR25 = VAR14.VAR26.VAR27;
        VAR3->VAR28    = VAR14.VAR26.VAR29;
        VAR3->VAR30        = VAR14.VAR26.VAR31;
        VAR3->VAR17.VAR18.VAR32 = VAR33;
        VAR3->VAR17.VAR18.VAR34 = VAR34;
        VAR3->VAR35   = VAR36;
        VAR3->VAR37 = VAR38;
        VAR6.VAR39 = VAR40;
        VAR6.VAR6.VAR41.VAR42 = VAR43;
 } else if (1 == VAR3->VAR22) {
 unsigned int VAR44 = 0;
 if (!VAR45.FUN4()) {
            FUN3(VAR8);
 return VAR46;
 }
 if (!VAR45.FUN5(VAR44)) {
            FUN3(VAR8);
 return VAR46;
 }
        VAR3->VAR30 = VAR44;
        VAR3->VAR23 =  VAR47;
        VAR3->VAR25 = VAR14.VAR48.VAR27;
        VAR3->VAR28    = VAR14.VAR48.VAR29;
        VAR3->VAR17.VAR18.VAR34 = VAR49;
        VAR3->VAR35   = VAR50;
        VAR3->VAR37 = VAR51;
 if (!VAR45.FUN6(VAR3->VAR17.VAR18.VAR32)) {
            FUN3(VAR8);
 return VAR46;
 }
        VAR6.VAR39 = VAR52;
        VAR6.VAR6.VAR41.VAR42 = VAR53;
 } else {
        VAR3->VAR23 = VAR54;
        FUN2(VAR8,
 (int)VAR3->VAR22);
        VAR4 = VAR55;
 }
 if (VAR56) {
 int VAR57 = 0;
        VAR57 = FUN7(VAR14.VAR58, VAR59, &VAR6);
 if (VAR57) {
            FUN3(VAR8);
 return VAR46;
 } else {
            VAR3->VAR17.VAR18.VAR60 = VAR6.VAR6.VAR41.VAR61;
            VAR3->VAR17.VAR18.VAR62 = VAR6.VAR6.VAR41.VAR63;
            VAR3->VAR17.VAR18.VAR64 = VAR6.VAR6.VAR41.VAR65[0].VAR66;
            VAR3->VAR17.VAR18.VAR67 = VAR6.VAR6.VAR41.VAR65[0].VAR68[0];
 }
 } else {
    VAR3->VAR17.VAR18.VAR62 =  VAR14.VAR69.VAR70;
    VAR3->VAR17.VAR18.VAR60  =  VAR14.VAR69.VAR71;
    VAR3->VAR17.VAR18.VAR64 = VAR14.VAR69.VAR72;
    VAR3->VAR17.VAR18.VAR67 = VAR14.VAR69.VAR73;
 }
 if ((VAR3->VAR17.VAR18.VAR32 == VAR74) ||
 (VAR3->VAR17.VAR18.VAR32 == VAR75)) {
           VAR3->VAR17.VAR18.VAR64 = FUN8(VAR14.VAR69.VAR71, 16);
        VAR3->VAR17.VAR18.VAR67 = VAR14.VAR69.VAR70;
 }
    FUN9(VAR8
 VAR8,
 (unsigned int)VAR3->VAR22,
 (unsigned int)VAR3->VAR17.VAR18.VAR60,
 (unsigned int)VAR3->VAR17.VAR18.VAR62,
 (int)VAR3->VAR17.VAR18.VAR64,
 (unsigned int)VAR3->VAR17.VAR18.VAR67,
 (unsigned int)VAR3->VAR17.VAR18.VAR32,
 (unsigned int)VAR3->VAR30,
 (unsigned int)VAR3->VAR25);
 return VAR4;
}