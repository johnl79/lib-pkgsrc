# $NetBSD: Makefile,v 1.60 2012/10/23 19:50:51 asau Exp $

PKGNAME=		amanda-common-${AMANDA_VERSION}
PKGREVISION=		2
SVR4_PKGNAME=		amaco

COMMENT=		Common libraries and binaries for Amanda

.include "../../sysutils/amanda-common/Makefile.common"

.if ${OPSYS} == "SunOS"
CPPFLAGS+=		-D_LARGEFILE64_SOURCE
.endif

CONFIGURE_ARGS+=	--without-server --without-client --without-gnuplot

PKG_GROUPS=		${AMANDA_GROUP}
PKG_USERS=		${AMANDA_USER}:${AMANDA_GROUP}

PKG_GECOS.${AMANDA_USER}=	Amanda backup user
PKG_SHELL.${AMANDA_USER}=	${SH}
PKG_HOME.${AMANDA_USER}=	${AMANDA_VAR}

OWN_DIRS+=		${PKG_SYSCONFDIR}/amanda
OWN_DIRS_PERMS=		${AMANDA_VAR} ${AMANDA_USER} ${AMANDA_GROUP} 0750
OWN_DIRS_PERMS+=	${AMANDA_VAR}/gnutar-lists ${AMANDA_USER} ${AMANDA_GROUP} 0750
OWN_DIRS_PERMS+=	${VARBASE}/log/amanda ${AMANDA_USER} ${AMANDA_GROUP} 0750

CONF_FILES_PERMS=	${PREFIX}/share/doc/amanda/example/amanda-client.conf \
			${PKG_SYSCONFDIR}/amanda/amanda-client.conf     \
			${AMANDA_USER} ${AMANDA_GROUP} 0600

REQD_FILES_PERMS+=	/dev/null ${AMANDA_VAR}/amandates ${AMANDA_USER} ${AMANDA_GROUP} 0640

SPECIAL_PERMS+=		sbin/amservice ${AM_PROG_PERMS}

.include "../../mk/bsd.pkg.mk"
