# $NetBSD: Makefile,v 1.33 2012/10/08 23:01:59 adam Exp $
#

DISTNAME=	newmail-0.0.15
PKGNAME=	claws-mail-newmail-0.0.15
PKGREVISION=	19
CATEGORIES=	mail
MASTER_SITES=	http://claws-mail.org/downloads/plugins/

MAINTAINER=	pkgsrc-users@NetBSD.org
COMMENT=	Write log file info on arriving email

DEPENDS+=	claws-mail-${CLAWS_VERSION}{,nb[0-9]*}:../../mail/claws-mail

.include "../../mk/bsd.prefs.mk"

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config
USE_LANGUAGES+=	c

.include "../../mail/claws-mail/Makefile.vers"
.include "../../mail/claws-mail/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../security/gnutls/buildlink3.mk"
.include "../../x11/gtk2/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
