gst_vorbis_tag_add_coverart (GstTagList * tags, const gchar * img_data_base64,
gst_vorbis_tag_add_coverart (GstTagList * tags, gchar * img_data_base64,
     gint base64_len)
 {
   GstBuffer *img;
   gsize img_len;
  guchar *out;
   guint save = 0;
   gint state = 0;
 
   if (base64_len < 2)
     goto not_enough_data;
 
  /* img_data_base64 points to a temporary copy of the base64 encoded data, so
   * it's safe to do inpace decoding here
   * TODO: glib 2.20 and later provides g_base64_decode_inplace, so change this
   * to use glib's API instead once it's in wider use:
   *  http://bugzilla.gnome.org/show_bug.cgi?id=564728
   *  http://svn.gnome.org/viewvc/glib?view=revision&revision=7807 */
  out = (guchar *) img_data_base64;
  img_len = g_base64_decode_step (img_data_base64, base64_len,
      out, &state, &save);
 
   if (img_len == 0)
     goto decode_failed;
 
  img = gst_tag_image_data_to_image_buffer (out, img_len,
       GST_TAG_IMAGE_TYPE_NONE);
 
   if (img == NULL)
  gst_tag_list_add (tags, GST_TAG_MERGE_APPEND,
      GST_TAG_PREVIEW_IMAGE, img, NULL);

       GST_TAG_PREVIEW_IMAGE, img, NULL);
 
   gst_buffer_unref (img);
   return;
 
 /* ERRORS */
  {
    GST_WARNING ("COVERART tag with too little base64-encoded data");
     GST_WARNING ("COVERART tag with too little base64-encoded data");
     return;
   }
 decode_failed:
   {
    GST_WARNING ("Couldn't decode base64 image data from COVERART tag");
     return;
   }
 convert_failed:
   {
     GST_WARNING ("Couldn't extract image or image type from COVERART tag");
     return;
   }
 }
