# $NetBSD: Makefile,v 1.5 2012/10/31 11:18:04 asau Exp $

DISTNAME=	Eval-Closure-0.08
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=../../authors/id/D/DO/DOY/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/~doy/Eval-Closure/
COMMENT=	Safely and cleanly create closures via string eval
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Sub-Exporter-[0-9]*:../../devel/p5-Sub-Exporter
DEPENDS+=	p5-Try-Tiny-[0-9]*:../../devel/p5-Try-Tiny

BUILD_DEPENDS+=	p5-Test-Fatal-[0-9]*:../../devel/p5-Test-Fatal
BUILD_DEPENDS+=	p5-Test-Requires-[0-9]*:../../devel/p5-Test-Requires

PKG_INSTALLATION_TYPES=	overwrite pkgviews

PERL5_PACKLIST=		auto/Eval/Closure/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
