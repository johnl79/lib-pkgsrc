# $NetBSD: Makefile,v 1.52 2012/12/16 01:52:00 obache Exp $
#

DISTNAME=	konversation-1.4
PKGREVISION=	11
CATEGORIES=	chat kde
MASTER_SITES=	${MASTER_SITE_KDE:=konversation/1.4/src/}
EXTRACT_SUFX=	.tar.xz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://konversation.kde.org/
COMMENT=	KDE IRC Client
LICENSE=	gnu-gpl-v2

BUILD_DEPENDS+= automoc4>=0.9.87:../../devel/automoc4

USE_TOOLS+=	perl msgfmt
USE_LANGUAGES=	c c++

REPLACE_BASH+=		data/scripts/*
REPLACE_PERL+=		data/updaters/konversation-*.pl
REPLACE_PERL+=		data/scripts/*
REPLACE_PYTHON+=	data/scripts/*
REPLACE_PYTHON+=	data/scripting_support/python/konversation/dbus.py 

USE_TOOLS+=		bash:run

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} != "Linux"
DEPENDS+=		psmisc>=20.1:../../sysutils/psmisc
.endif

.include "../../meta-pkgs/kde4/kde4.mk"
.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../misc/kdepimlibs4/buildlink3.mk"
.include "../../security/qca2/buildlink3.mk"
.include "../../x11/kdelibs4/buildlink3.mk"
.include "../../x11/libXScrnSaver/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/bsd.pkg.mk"
