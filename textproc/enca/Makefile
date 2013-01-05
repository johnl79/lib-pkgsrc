# $NetBSD: Makefile,v 1.3 2012/10/25 06:55:49 asau Exp $
#

DISTNAME=		enca-1.9
CATEGORIES=		converters
MASTER_SITES=		http://trific.ath.cx/Ftp/enca/
EXTRACT_SUFX=		.tar.bz2

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://trific.ath.cx/software/enca/
COMMENT=		Extremely Naive Charset Analyser

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
USE_MULTIARCH=		lib
USE_PKGLOCALEDIR=	yes
USE_TOOLS+=		gmake
PKGCONFIG_OVERRIDE+=	${WRKSRC}/enca.pc.in

# XXX: multiarch
SUBST_CLASSES+=		lns
SUBST_STAGE.lns=	pre-build
SUBST_FILES.lns=	Makefile src/Makefile
SUBST_SED.lns=		-e '/^LN_S =/s/-s/-sf/'

.include "../../mk/bsd.pkg.mk"
