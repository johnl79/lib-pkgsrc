$NetBSD$

--- gcc/config/sol2.h.orig	Mon Aug 20 13:12:58 2012
+++ gcc/config/sol2.h	Mon Aug 20 13:13:30 2012
@@ -149,8 +149,8 @@
   "%{G:-G} \
    %{YP,*} \
    %{R*} \
-   %{!YP,*:%{p|pg:-Y P,%R/usr/ccs/lib/libp:%R/usr/lib/libp:%R/usr/ccs/lib:%R/lib:%R/usr/lib} \
-	   %{!p:%{!pg:-Y P,%R/usr/ccs/lib:%R/lib:%R/usr/lib}}}"
+   %{!YP,*:%{p|pg:-Y P,%R/usr/ccs/lib/libp:%R/usr/lib/libp:%R/usr/ccs/lib:%R/lib:%R/usr/lib:%R@PREFIX@} \
+	   %{!p:%{!pg:-Y P,%R/usr/ccs/lib:%R/lib:%R/usr/lib:%R@PREFIX@}}}"
 
 #undef LINK_ARCH32_SPEC
 #define LINK_ARCH32_SPEC LINK_ARCH32_SPEC_BASE
