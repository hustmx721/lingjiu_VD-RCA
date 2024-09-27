IMPEG2D_ERROR_CODES_T impeg2d_dec_seq_hdr(dec_state_t *ps_dec)
{
 stream_t *ps_stream;
    ps_stream = &ps_dec->s_bit_stream;
    UWORD16 u2_height;
    UWORD16 u2_width;

 if (impeg2d_bit_stream_nxt(ps_stream,START_CODE_LEN) != SEQUENCE_HEADER_CODE)
 {
        impeg2d_bit_stream_flush(ps_stream,START_CODE_LEN);
 return IMPEG2D_FRM_HDR_START_CODE_NOT_FOUND;

 }
    impeg2d_bit_stream_flush(ps_stream,START_CODE_LEN);

    u2_width    = impeg2d_bit_stream_get(ps_stream,12);
    u2_height   = impeg2d_bit_stream_get(ps_stream,12);

 if ((u2_width != ps_dec->u2_horizontal_size)
 || (u2_height != ps_dec->u2_vertical_size))
 {
 if (0 == ps_dec->u2_header_done)
 {
 /* This is the first time we are reading the resolution */
            ps_dec->u2_horizontal_size = u2_width;
            ps_dec->u2_vertical_size = u2_height;
 if (0 == ps_dec->u4_frm_buf_stride)
 {
                ps_dec->u4_frm_buf_stride  = (UWORD32) ALIGN16(u2_width);
 }
 }
 else
 {
 if((u2_width > ps_dec->u2_create_max_width)
 || (u2_height > ps_dec->u2_create_max_height))
 {
                IMPEG2D_ERROR_CODES_T e_error = IMPEG2D_UNSUPPORTED_DIMENSIONS;

                ps_dec->u2_reinit_max_height   = u2_height;
                ps_dec->u2_reinit_max_width    = u2_width;

 return e_error;
 }
 else
 {
 /* The resolution has changed */
 return (IMPEG2D_ERROR_CODES_T)IVD_RES_CHANGED;
 }
 }
 }

 if((ps_dec->u2_horizontal_size > ps_dec->u2_create_max_width)
 || (ps_dec->u2_vertical_size > ps_dec->u2_create_max_height))
 {
        IMPEG2D_ERROR_CODES_T e_error = IMPEG2D_UNSUPPORTED_DIMENSIONS;
 return SET_IVD_FATAL_ERROR(e_error);
 }


 /*------------------------------------------------------------------------*/
 /* Flush the following as they are not being used                         */
 /* aspect_ratio_info (4 bits)                                             */
 /*------------------------------------------------------------------------*/
    ps_dec->u2_aspect_ratio_info = impeg2d_bit_stream_get(ps_stream,4);

 /*------------------------------------------------------------------------*/

     /* Frame rate code(4 bits)                                                */
     /*------------------------------------------------------------------------*/
     ps_dec->u2_frame_rate_code = impeg2d_bit_stream_get(ps_stream,4);
     /*------------------------------------------------------------------------*/
     /* Flush the following as they are not being used                         */
     /* bit_rate_value (18 bits)                                               */
 /*------------------------------------------------------------------------*/
    impeg2d_bit_stream_flush(ps_stream,18);
    GET_MARKER_BIT(ps_dec,ps_stream);
 /*------------------------------------------------------------------------*/
 /* Flush the following as they are not being used                         */
 /* vbv_buffer_size_value(10 bits), constrained_parameter_flag (1 bit)     */
 /*------------------------------------------------------------------------*/
    impeg2d_bit_stream_flush(ps_stream,11);

 /*------------------------------------------------------------------------*/
 /* Quantization matrix for the intra blocks                               */
 /*------------------------------------------------------------------------*/
 if(impeg2d_bit_stream_get_bit(ps_stream) == 1)
 {
        UWORD16 i;
 for(i = 0; i < NUM_PELS_IN_BLOCK; i++)
 {
            ps_dec->au1_intra_quant_matrix[gau1_impeg2_inv_scan_zig_zag[i]] = (UWORD8)impeg2d_bit_stream_get(ps_stream,8);
 }

 }
 else
 {
        memcpy(ps_dec->au1_intra_quant_matrix,gau1_impeg2_intra_quant_matrix_default,
                NUM_PELS_IN_BLOCK);
 }

 /*------------------------------------------------------------------------*/
 /* Quantization matrix for the inter blocks                               */
 /*------------------------------------------------------------------------*/
 if(impeg2d_bit_stream_get_bit(ps_stream) == 1)
 {
        UWORD16 i;
 for(i = 0; i < NUM_PELS_IN_BLOCK; i++)
 {
            ps_dec->au1_inter_quant_matrix[gau1_impeg2_inv_scan_zig_zag[i]] = (UWORD8)impeg2d_bit_stream_get(ps_stream,8);
 }
 }
 else
 {
        memcpy(ps_dec->au1_inter_quant_matrix,gau1_impeg2_inter_quant_matrix_default,
            NUM_PELS_IN_BLOCK);
 }
    impeg2d_next_start_code(ps_dec);

 return (IMPEG2D_ERROR_CODES_T)IVD_ERROR_NONE;
}
