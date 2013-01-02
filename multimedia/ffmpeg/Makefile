# $NetBSD: Makefile,v 1.97 2012/12/19 14:58:33 drochner Exp $

PKGNAME=	ffmpeg-20121209.${DISTVERSION}

PKGREVISION=	1

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://ffmpeg.mplayerhq.hu/
COMMENT=	Decoding, encoding and streaming software

CONFIGURE_ARGS+=	--enable-avfilter
#CONFIGURE_ARGS+=	--enable-avfilter-lavf
CONFIGURE_ARGS+=	--enable-postproc

INSTALLATION_DIRS=	lib share/examples/ffmpeg share/doc/ffmpeg

CONF_FILES+=	${PREFIX}/share/examples/ffmpeg/ffserver.conf \
		${PKG_SYSCONFDIR}/ffserver.conf

.include "../../mk/bsd.prefs.mk"

.if !empty(MACHINE_PLATFORM:MDarwin-*-i386) \
 || !empty(MACHINE_PLATFORM:MSunOS-*-i386)
CONFIGURE_ARGS+=	--disable-asm
.endif

TEST_TARGET=	check

FFTOOLS=	cws2fws graph2dot lavfi-showfiltfmts pktdumper
FFTOOLS+=	probetest qt-faststart trasher

.include "options.mk"

post-install:
	${INSTALL_DATA} ${WRKSRC}/doc/*.txt \
		${DESTDIR}${PREFIX}/share/doc/ffmpeg
	${INSTALL_DATA} ${WRKSRC}/doc/ffserver.conf \
		${DESTDIR}${PREFIX}/share/examples/ffmpeg
.if !empty(PKG_OPTIONS:Mtools)
.  for tool in ${FFTOOLS}
	${INSTALL_PROGRAM} ${WRKSRC}/tools/${tool} ${DESTDIR}${PREFIX}/bin
.  endfor
.endif

.include "../../mk/compiler.mk"

.if !empty(PKGSRC_COMPILER:Mclang)
CFLAGS+=	-no-integrated-as
.endif

.include "../../multimedia/ffmpeg/Makefile.common"
