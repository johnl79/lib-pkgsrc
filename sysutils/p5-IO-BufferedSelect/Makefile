# $NetBSD: Makefile,v 1.3 2012/10/23 19:51:17 asau Exp $

DISTNAME=	IO-BufferedSelect-1.0
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	sysutils perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=IO/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/IO-BufferedSelect
COMMENT=	Perl buffered version of select interface that operates on lines
LICENSE=	${PERL5_LICENSE}

PERL5_PACKLIST=		auto/IO/BufferedSelect/.packlist

WRKSRC=			${WRKDIR}/IO-BufferedSelect

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
