# $NetBSD: Makefile,v 1.9 2012/10/08 13:25:14 asau Exp $
#

DISTNAME=	nelma-3.2
PKGREVISION=	2
CATEGORIES=	cad
MASTER_SITES=	http://www.tablix.org/~avian/nelma/releases/

MAINTAINER=	dmcmahill@NetBSD.org
HOMEPAGE=	http://www.tablix.org/~avian/nelma/
COMMENT=	Circuit board capacitance extraction tool

PKG_INSTALLATION_TYPES=	overwrite pkgviews

USE_TOOLS+=	pkg-config

INSTALLATION_DIRS+=	bin ${PKGMANDIR}/man1


.include "../../devel/confuse/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../graphics/png/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
