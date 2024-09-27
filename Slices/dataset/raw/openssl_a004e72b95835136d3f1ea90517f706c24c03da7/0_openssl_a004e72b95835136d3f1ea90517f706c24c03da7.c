static int ssl_scan_clienthello_custom_tlsext(SSL *s,
                                              const unsigned char *data,
                                              const unsigned char *limit,
                                              int *al)
{
    unsigned short type, size, len;
    /* If resumed session or no custom extensions nothing to do */
     if (s->hit || s->cert->srv_ext.meths_count == 0)
         return 1;
 
    if (limit - data <= 2)
         return 1;
     n2s(data, len);
 
    if (limit - data < len)
         return 1;
 
    while (limit - data >= 4) {
         n2s(data, type);
         n2s(data, size);
 
        if (limit - data < size)
             return 1;
         if (custom_ext_parse(s, 1 /* server */ , type, data, size, al) <= 0)
             return 0;

        data += size;
    }

    return 1;
}
