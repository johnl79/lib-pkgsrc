# $NetBSD: Makefile,v 1.9 2012/10/08 09:57:35 asau Exp $
#

DISTNAME=	pycarddav0.3.4
PKGNAME=	${DISTNAME:S/pycarddav/${PYPKGPREFIX}-carddav-/}
CATEGORIES=	misc
MASTER_SITES=	http://lostpackets.de/pycarddav/downloads/
EXTRACT_SUFX=	.tgz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://pycarddav.lostpackets.de/
COMMENT=	Simple way of accessing a CardDAV resource
LICENSE=	beer-ware

DEPENDS+=	${PYPKGPREFIX}-sqlite3-[0-9]*:../../databases/py-sqlite3
DEPENDS+=	${PYPKGPREFIX}-lxml-[0-9]*:../../textproc/py-lxml
DEPENDS+=	${PYPKGPREFIX}-vobject-[0-9]*:../../textproc/py-vobject
DEPENDS+=	${PYPKGPREFIX}-curl-[0-9]*:../../www/py-curl

USE_LANGUAGES=	# none

SUBST_CLASSES=		env
SUBST_MESSAGE.env=	Fixing path to python interpreter.
SUBST_FILES.env=	pc_query pycardsyncer
SUBST_SED.env+=		-e "s,/usr/bin/env python,${PYTHONBIN},"
SUBST_STAGE.env=	pre-build

INSTALLATION_DIRS= bin share/doc/py-carddav share/examples/py-carddav

do-build:

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/pc_query ${DESTDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/pycardsyncer ${DESTDIR}${PREFIX}/bin
	${INSTALL_DATA} ${WRKSRC}/README* ${DESTDIR}${PREFIX}/share/doc/py-carddav
	${INSTALL_DATA} ${WRKSRC}/pycard.conf.sample ${DESTDIR}${PREFIX}/share/examples/py-carddav

.include "../../lang/python/application.mk"
.include "../../mk/bsd.pkg.mk"
