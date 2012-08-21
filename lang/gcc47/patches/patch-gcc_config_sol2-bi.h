$NetBSD$

--- gcc/config/sol2-bi.h.orig	Mon Aug 20 13:10:07 2012
+++ gcc/config/sol2-bi.h	Mon Aug 20 13:11:54 2012
@@ -74,8 +74,8 @@
   "%{G:-G} \
    %{YP,*} \
    %{R*} \
-   %{!YP,*:%{p|pg:-Y P,%R/usr/lib/libp/" ARCH64_SUBDIR ":%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR "}	\
-	   %{!p:%{!pg:-Y P,%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR "}}}"
+   %{!YP,*:%{p|pg:-Y P,%R/usr/lib/libp/" ARCH64_SUBDIR ":%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR ":%R@PREFIX@/" ARCH64_SUBDIR "}	\
+	   %{!p:%{!pg:-Y P,%R/lib/" ARCH64_SUBDIR ":%R/usr/lib/" ARCH64_SUBDIR ":%R@PREFIX@/" ARCH64_SUBDIR "}}}"
 
 #undef LINK_ARCH64_SPEC
 #ifndef USE_GLD
