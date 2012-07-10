$NetBSD$

Force use the new structured proc on SunOS, which builds with large file support
--- scheduler/auth.c.orig	2011-08-31 04:58:33.000000000 +0000
+++ scheduler/auth.c
@@ -85,6 +85,7 @@ extern const char *cssmErrorString(int e
 #  include <sys/param.h>
 #endif /* HAVE_SYS_PARAM_H */
 #ifdef HAVE_SYS_UCRED_H
+#  define _STRUCTURED_PROC 1
 #  include <sys/ucred.h>
 typedef struct xucred cupsd_ucred_t;
 #  define CUPSD_UCRED_UID(c) (c).cr_uid
