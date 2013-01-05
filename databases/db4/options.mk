# $NetBSD$

PKG_OPTIONS_VAR=	PKG_OPTIONS.db4

PKG_SUPPORTED_OPTIONS=	doc
PKG_SUGGESTED_OPTIONS=	doc

.include "../../mk/bsd.options.mk"

###
### Install documentation files
###
.if !empty(PKG_OPTIONS:Mdoc)
INSTALL_DOCS=		install_docs
PLIST.docs=		yes
.endif
