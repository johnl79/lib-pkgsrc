# $NetBSD: Makefile,v 1.20 2012/10/23 19:51:00 asau Exp $

DISTNAME=	e2fsprogs-1.41.12
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_SOURCEFORGE:=e2fsprogs/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://e2fsprogs.sourceforge.net/
COMMENT=	Second extended file system (ext2fs) management programs

GNU_CONFIGURE=	yes
USE_TOOLS+=	makeinfo gmake
INFO_FILES=	yes

.include "../../mk/bsd.prefs.mk"

CONFIGURE_ARGS+=	--sysconfdir=${PKG_SYSCONFDIR:Q}

# Only build fsck(8) on platforms that need it.
PLIST_VARS+=		fsck
.if ${OPSYS} == "Linux"
PLIST.fsck=		yes
.else
CONFIGURE_ARGS+=	--disable-fsck
.endif

EGDIR=			${PREFIX}/share/examples/ext2fs
CONF_FILES+=		${EGDIR}/mke2fs.conf ${PKG_SYSCONFDIR}/mke2fs.conf
INSTALL_MAKE_FLAGS=	${MAKE_FLAGS} root_sysconfdir=${EGDIR:Q}

.include "../../mk/bsd.pkg.mk"
