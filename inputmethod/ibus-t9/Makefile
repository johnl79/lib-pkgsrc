# $NetBSD: Makefile,v 1.14 2012/10/08 23:01:52 adam Exp $
#

DISTNAME=	ibus-t9-2.1.0.20100601
PKGREVISION=	13
CATEGORIES=	inputmethod chinese
MASTER_SITES=	http://ibus-t9.googlecode.com/files/

MAINTAINER=	obache@NetBSD.org
HOMEPAGE=	http://code.google.com/p/ibus-t9/
COMMENT=	IBus T9 Input Method
LICENSE=	gnu-gpl-v3

DEPENDS+=	librsvg-[0-9]*:../../graphics/librsvg

GNU_CONFIGURE=		yes
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		gmake pkg-config

.include "../../inputmethod/ibus/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
