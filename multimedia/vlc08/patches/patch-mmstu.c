$NetBSD: patch-mmstu.c,v 1.1 2008/09/12 14:47:39 sborrill Exp $

Fix for:
* A signedness error leading to a stack-based buffer overflow in the
mms_ReceiveCommand() function in modules/access/mms/mmstu.c
(CVE-2008-3794).

--- modules/access/mms/mmstu.c.orig	2008-07-08 21:59:23.000000000 +0100
+++ modules/access/mms/mmstu.c	2008-09-12 11:16:01.000000000 +0100
@@ -28,6 +28,7 @@
 #include <stdlib.h>
 #include <vlc/vlc.h>
 #include <string.h>
+#include <inttypes.h>
 #include <vlc/input.h>
 #include <errno.h>
 
@@ -695,7 +696,7 @@
         GetDWLE( p_sys->p_cmd + MMS_CMD_HEADERSIZE + 60 );
 
     msg_Dbg( p_access,
-             "answer 0x06 flags:0x%8.8x media_length:%us packet_length:%lu packet_count:%u max_bit_rate:%d header_size:%d",
+             "answer 0x06 flags:0x%8.8"PRIx32" media_length:%"PRIu32"s packet_length:%zu packet_count:%"PRIu32" max_bit_rate:%d header_size:%zu",
              p_sys->i_flags_broadcast,
              p_sys->i_media_length,
              p_sys->i_packet_length,
@@ -749,12 +750,12 @@
         if( p_sys->i_header >= p_sys->i_header_size )
         {
             msg_Dbg( p_access,
-                     "header complete(%d)",
+                     "header complete(%zu)",
                      p_sys->i_header );
             break;
         }
         msg_Dbg( p_access,
-                 "header incomplete (%d/%d), reading more",
+                 "header incomplete (%zu/%zu), reading more",
                  p_sys->i_header,
                  p_sys->i_header_size );
     }
@@ -1128,7 +1129,7 @@
 
 static int  mms_ParseCommand( access_t *p_access,
                               uint8_t *p_data,
-                              int i_data,
+                              size_t i_data,
                               int *pi_used )
 {
  #define GET32( i_pos ) \
@@ -1137,7 +1138,7 @@
       ( p_sys->p_cmd[i_pos + 3] << 24 ) )
 
     access_sys_t        *p_sys = p_access->p_sys;
-    int         i_length;
+    uint32_t    i_length;
     uint32_t    i_id;
 
     if( p_sys->p_cmd )
@@ -1159,10 +1160,10 @@
     i_id =  GetDWLE( p_data + 4 );
     i_length = GetDWLE( p_data + 8 ) + 16;
 
-    if( i_id != 0xb00bface )
+    if( i_id != 0xb00bface || i_length < 16 )
     {
         msg_Err( p_access,
-                 "incorrect command header (0x%x)", i_id );
+                 "incorrect command header (0x%"PRIx32")", i_id );
         p_sys->i_command = 0;
         return -1;
     }
@@ -1170,8 +1171,8 @@
     if( i_length > p_sys->i_cmd )
     {
         msg_Warn( p_access,
-                  "truncated command (missing %d bytes)",
-                   i_length - i_data  );
+                  "truncated command (missing %zu bytes)",
+                   (size_t)i_length - i_data  );
         p_sys->i_command = 0;
         return -1;
     }
