PORTNAME=	openrct2
DISTVERSIONPREFIX=	v
DISTVERSION=	0.4.2
PORTREVISION=	1
CATEGORIES=	games

MAINTAINER=	pkubaj@FreeBSD.org
COMMENT=	Open source re-implementation of RollerCoaster Tycoon 2
WWW=		https://openrct2.io/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/licence.txt

NOT_FOR_ARCHS=	mips mips64 powerpc powerpc64 powerpcspe sparc64
NOT_FOR_ARCHS_REASON=	Only for little-endian architectures

BUILD_DEPENDS=	nlohmann-json>0:devel/nlohmann-json
LIB_DEPENDS=	libpng.so:graphics/png \
		libzip.so:archivers/libzip \
		libFLAC.so:audio/flac \
		libvorbisfile.so:audio/libvorbis \
		libspeexdsp.so:audio/speexdsp \
		libfontconfig.so:x11-fonts/fontconfig \
		libcurl.so:ftp/curl \
		libfreetype.so:print/freetype2 \
		libicuuc.so:devel/icu \
		libbenchmark.so:devel/benchmark \
		libduktape.so:lang/duktape-lib

USES=		cmake compiler:c++17-lang desktop-file-utils gnome gl iconv \
		localbase:ldflags pkgconfig sdl shared-mime-info ssl
USE_GITHUB=	yes
GH_ACCOUNT=	OpenRCT2
GH_PROJECT=	OpenRCT2
GH_TUPLE=	OpenRCT2:objects:v1.3.5:objects \
		OpenRCT2:title-sequences:v0.4.0:title_sequences
USE_GL=		gl
USE_LDCONFIG=	yes
USE_SDL=	sdl2

CMAKE_ON=	BUILD_SHARED_LIBS
CMAKE_OFF=	DOWNLOAD_TITLE_SEQUENCES \
		DOWNLOAD_OBJECTS

PORTDATA=	*
PORTDOCS=	changelog.txt contributors.md licence.txt openrct2.d.ts \
		readme.txt scripting.md

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|%%DATADIR%%|${DATADIR}|' \
		${WRKSRC}/src/openrct2/config/Config.cpp

post-install:
	(cd ${WRKSRC_title_sequences}; \
		${COPYTREE_SHARE}/title . ${STAGEDIR}${DATADIR}/title)
	(cd ${WRKSRC_objects}; \
		${COPYTREE_SHARE}/objects . ${STAGEDIR}${DATADIR}/object)

.include <bsd.port.mk>
