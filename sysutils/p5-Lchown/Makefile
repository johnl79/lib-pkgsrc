# $NetBSD: Makefile,v 1.14 2012/10/23 19:51:17 asau Exp $

DISTNAME=	Lchown-1.01
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	3
SVR4_PKGNAME=	p5lc
CATEGORIES=	sysutils perl5
MASTER_SITES=	http://search.cpan.org/CPAN/authors/id/N/NC/NCLEATON/
#MASTER_SITES=	${MASTER_SITE_PERL_CPAN}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Lchown/
COMMENT=	Perl5 module interface to the lchown() system call
LICENSE=	${PERL5_LICENSE}

USE_LANGUAGES+=		c

PERL5_PACKLIST=		auto/Lchown/.packlist
PERL5_MODULE_TYPE=	Module::Build

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
