# $NetBSD: Makefile,v 1.10 2012/10/23 19:51:08 asau Exp $
#

DISTNAME=		ipmitool-1.8.11
PKGREVISION=		1
CATEGORIES=		sysutils
MASTER_SITES=		${MASTER_SITE_SOURCEFORGE:=ipmitool/}

MAINTAINER=		heinz@NetBSD.org
HOMEPAGE=		http://ipmitool.sourceforge.net/
COMMENT=		Command-line utility for managing IPMI devices

PKG_INSTALLATION_TYPES=	overwrite pkgviews

GNU_CONFIGURE=		yes
USE_GNU_READLINE=	yes # ipmitool uses rl_event_hook
INSTALLATION_DIRS+=	share/examples/ipmitool share/doc/ipmitool

OPSYSVARS+=		CONFIGURE_ARGS
CONFIGURE_ARGS.NetBSD+=	--disable-intf-open --disable-intf-imb
CONFIGURE_ARGS.DragonFly+= --disable-intf-open --disable-intf-imb
CONFIGURE_ARGS.SunOS+=	--enable-solaris-opt

.include "../../devel/readline/buildlink3.mk"
.include "../../security/openssl/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
