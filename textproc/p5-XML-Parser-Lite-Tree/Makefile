# $NetBSD: Makefile,v 1.6 2012/10/25 06:56:38 asau Exp $

DISTNAME=	XML-Parser-Lite-Tree-0.14
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=XML/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/XML-Parser/
COMMENT=	Perl extension for a lightweight XML tree builder
LICENSE=	(${PERL5_LICENSE}) AND artistic-2.0

PERL5_PACKLIST=		auto/XML/Parser/Lite/Tree/.packlist

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
