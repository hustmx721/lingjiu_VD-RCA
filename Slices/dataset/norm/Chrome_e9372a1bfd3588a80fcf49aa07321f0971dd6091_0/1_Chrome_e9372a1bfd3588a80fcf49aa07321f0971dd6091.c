static VAR1::VAR2<VAR1::VAR3> FUN1(const VAR1::VAR4& VAR5)
 {
     FUN2(VAR6);
     if (VAR5.FUN3() < 1)
        return VAR7::FUN4();
     VAR8* VAR9 = VAR10::FUN5(VAR5.FUN6());
     FUN7(VAR8*, VAR11, VAR10::FUN8(FUN9(VAR5, 0, VAR12)) ? VAR10::FUN5(VAR1::VAR2<VAR1::VAR13>::FUN10(FUN9(VAR5, 0, VAR12))) : 0);
     if (VAR5.FUN3() <= 1) {
        VAR9->FUN11(VAR11);
        return VAR1::VAR2<VAR1::VAR3>();
    }
    FUN7(int, VAR14, FUN12(FUN9(VAR5, 1, VAR12)));
    VAR9->FUN11(VAR11, VAR14);
    return VAR1::VAR2<VAR1::VAR3>();
}