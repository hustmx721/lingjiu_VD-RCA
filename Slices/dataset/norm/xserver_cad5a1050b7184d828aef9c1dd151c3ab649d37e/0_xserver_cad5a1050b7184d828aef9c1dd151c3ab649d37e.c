FUN1 (ClientPtr VAR1)
{
    FUN2(VAR2);
    int VAR3;
    VAR4 *VAR5 = (void*) ((char*) VAR6 + sizeof(*VAR6));
     int VAR3;
     VAR4 *VAR5 = (void*) ((char*) VAR6 + sizeof(*VAR6));
     FUN3(VAR2);
    FUN4(&VAR6->VAR7);
     FUN5(VAR2,
                        VAR6->VAR7 * sizeof(VAR5[0]));
    }