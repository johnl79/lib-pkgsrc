# $NetBSD: Makefile,v 1.18 2012/10/23 17:18:38 asau Exp $

PKGNAME=		${DISTNAME:S/-/-pgsql-/}
PKGREVISION=		11
COMMENT=		PostgreSQL-based DNS server

CONFLICTS=		mydns-mysql-[0-9]*

CONFIGURE_ARGS+=	--without-mysql
CONFIGURE_ARGS+=	--with-pgsql-lib=${BUILDLINK_PREFIX.${PGSQL_TYPE}}/lib
CONFIGURE_ARGS+=	--with-pgsql-include=${BUILDLINK_PREFIX.${PGSQL_TYPE}}/include

INFO_FILES=		# PLIST

.include "../../mk/pgsql.buildlink3.mk"
.include "Makefile.common"
