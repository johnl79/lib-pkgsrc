# $NetBSD: Makefile,v 1.21 2012/10/31 11:17:21 asau Exp $

DISTNAME=	libstatgrab-0.17
PKGREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	ftp://ftp.uk.i-scream.org/pub/i-scream/libstatgrab/ \
		ftp://ftp.i-scream.org/pub/i-scream/libstatgrab/ \
		http://ftp.i-scream.org/pub/i-scream/libstatgrab/ \
		http://www.mirrorservice.org/sites/ftp.i-scream.org/pub/i-scream/libstatgrab/ \
		http://dl.ambiweb.de/mirrors/ftp.i-scream.org/libstatgrab/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.i-scream.org/libstatgrab/
COMMENT=	Provides a useful interface to system statistics
LICENSE=	gnu-gpl-v2

.include "options.mk"

USE_TOOLS+=		pkg-config perl:run

GNU_CONFIGURE=		yes
USE_LIBTOOL=		yes
PKGCONFIG_OVERRIDE=	libstatgrab.pc.in

REPLACE_PERL+=		src/statgrab/statgrab-make-mrtg-config.in
REPLACE_PERL+=		src/statgrab/statgrab-make-mrtg-index.in

CONFIGURE_ARGS+=	--disable-examples

.include "../../mk/bsd.pkg.mk"
