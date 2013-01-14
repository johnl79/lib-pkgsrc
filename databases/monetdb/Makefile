# $NetBSD: Makefile,v 1.49 2012/03/20 21:00:47 adam Exp $

DISTNAME=	MonetDB-11.13.5
MASTER_SITES=	http://dev.monetdb.org/downloads/sources/Oct2012-SP1/
EXTRACT_SUFX= .tar.bz2
CATEGORIES=	databases

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://www.monetdb.org/
COMMENT= Column oriented database
LICENSE= mpl-1.1

CONFIGURE_ARGS= --enable-monetdb5 --enable-sql --enable-odbc

CHECK_INTERPRETER_SKIP+= bin/sqlsample.php

USE_TOOLS+= perl

SUBST_CLASSES+= fix-perl
SUBST_STAGE.fix-perl= pre-build
SUBST_MESSAGE.fix-perl= Fixing perl shebangs.
SUBST_FILES.fix-perl= clients/perl/Tests/malsample.pl.in clients/perl/Tests/sqlsample.pl.in
SUBST_SED.fix-perl= -e 's,@PERL@,${PREFIX}/bin/perl,g'   

REPLACE_PYTHON= lib/python2.7/site-packages/MonetDBtesting/*.py
PY_PATCHPLIST= yes

USE_TOOLS+= pkg-config 
USE_LIBTOOL=		yes
USE_TOOLS+=		gmake
GNU_CONFIGURE=		yes

.include "../../databases/unixodbc/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../devel/pcre/buildlink3.mk"
.include "../../textproc/libxml2/buildlink3.mk"
.include "../../devel/libltdl/buildlink3.mk"
.include "../../textproc/icu/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../lang/python/extension.mk"
.include "../../lang/perl5/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
