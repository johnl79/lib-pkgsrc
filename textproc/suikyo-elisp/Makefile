# $NetBSD: Makefile,v 1.4 2012/10/25 06:57:02 asau Exp $
#

.include "../../textproc/suikyo/Makefile.common"

PKGNAME=	${EMACS_PKGNAME_PREFIX}${DISTNAME:S/-/-elisp-/}
PKGREVISION=	1

MAINTAINER=	obache@NetBSD.org
HOMEPAGE=	http://taiyaki.org/suikyo/elisp/index.html
COMMENT=	Suikyo for Emacs Lisp

DEPENDS+=	suikyo-conv-table>=${SUIKYO_VER}:../../textproc/suikyo-conv-table
DEPENDS+=	suikyo-docs>=${SUIKYO_VER}:../../textproc/suikyo-docs

BUILD_DIRS+=	elisp

CONFIGURE_ARGS+=	--with-emacs-sitelispdir=${EMACS_LISPPREFIX}

.include "../../editors/emacs/modules.mk"
.include "../../mk/bsd.pkg.mk"
