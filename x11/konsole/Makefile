# $NetBSD: Makefile,v 1.7 2012/10/08 23:02:37 adam Exp $

DISTNAME=	konsole-${_KDE_VERSION}
PKGREVISION=	4
CATEGORIES=	x11
COMMENT=	a terminal emulator for the K Desktop Environment

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/kdelibs4/buildlink3.mk"
.include "../../x11/kde-baseapps4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
