PORTNAME=	easyrpg-player
PORTVERSION=	0.7.0
PORTREVISION=	3
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	RPG Maker 2000/2003 and EasyRPG games interpreter
WWW=		https://easyrpg.org/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	liblcf.so:games/liblcf \
		libpng.so:graphics/png \
		libfreetype.so:print/freetype2 \
		libharfbuzz.so:print/harfbuzz \
		libspeexdsp.so:audio/speexdsp \
		libmpg123.so:audio/mpg123 \
		libsndfile.so:audio/libsndfile \
		libvorbis.so:audio/libvorbis \
		libogg.so:audio/libogg \
		libopusfile.so:audio/opusfile \
		libopus.so:audio/opus \
		libWildMidi.so:audio/wildmidi \
		libxmp.so:audio/libxmp \
		libfmt.so:devel/libfmt \
		libasound.so:audio/alsa-lib \
		libfluidsynth.so:audio/fluidsynth
# these come from liblcf
LIB_DEPENDS+=	libicui18n.so:devel/icu \
		libexpat.so:textproc/expat2
BUILD_DEPENDS=	asciidoc:textproc/asciidoc \
		${LOCALBASE}/include/boost/shared_ptr.hpp:devel/boost-libs

USE_GITHUB=	yes
GH_ACCOUNT=	EasyRPG
GH_PROJECT=	Player

USES=		cmake:insource compiler:c++14-lang localbase:ldflags pkgconfig \
		sdl xorg
CMAKE_ARGS=	-DCMAKE_INSTALL_MANDIR=share/man
CMAKE_ON=	CMAKE_DISABLE_FIND_PACKAGE_Git
USE_XORG=	pixman
USE_SDL=	sdl2

PORTDOCS=	AUTHORS.md README.md

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/share/bash-completion/completions
	${INSTALL_DATA} ${WRKSRC}/resources/unix/bash-completion/easyrpg-player \
		${STAGEDIR}${PREFIX}/share/bash-completion/completions/

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
