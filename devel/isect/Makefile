# $NetBSD: Makefile,v 1.39 2012/10/31 11:17:07 asau Exp $
#

DISTNAME=	isect-1.6.2
PKGREVISION=	7
CATEGORIES=	devel
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=isectd/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://isectd.sourceforge.net/
COMMENT=	Open source middleware daemon

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
PTHREAD_OPTS+=		require
INFO_FILES=		# PLIST

RCD_SCRIPTS=	isect

DOCDIR=		${PREFIX}/share/doc/isect
EGDIR=		${PREFIX}/share/examples/isect

INSTALLATION_DIRS=	${DOCDIR} ${EGDIR}

post-install:
	for file in ${WRKSRC}/doc/*.html; do \
		${INSTALL_DATA} $${file} ${DESTDIR}${DOCDIR}; \
	done
	${INSTALL_DATA} ${WRKSRC}/COPYING ${DESTDIR}${EGDIR}

.include "../../www/libwww/buildlink3.mk"
.include "../../mk/pthread.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
