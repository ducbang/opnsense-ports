PORTNAME=	mroonga
PORTVERSION=	12.08
CATEGORIES=	databases textproc
MASTER_SITES=	http://packages.groonga.org/source/mroonga/

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Open-source fulltext search engine for MySQL
WWW=		https://mroonga.org/

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${NONEXISTENT}:${_MYSQL_SERVER}:configure
LIB_DEPENDS=	libgroonga.so:textproc/groonga

USES=		compiler:c11 libtool mysql pkgconfig shebangfix
IGNORE_WITH_MYSQL=	101m 102m 103m 57p 57w

SHEBANG_FILES=	data/rpm/post.sh data/rpm/preun.sh

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-mysql-build="$$(cd ${PORTSDIR}/${_MYSQL_SERVER}; ${MAKE} -V BUILD_WRKSRC)" \
		--with-mysql-config=${PREFIX}/bin/mysql_config \
		--with-mysql-source="$$(cd ${PORTSDIR}/${_MYSQL_SERVER}; ${MAKE} -V WRKSRC)"

SUB_FILES=	pkg-message

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -i .c++20 's,srcdir)/version[[:>:]],&.txt,' \
		${WRKSRC}/Makefile.in
	@${REINPLACE_CMD} -e '/deb/d' \
		-e '/rpm/d' \
		${WRKSRC}/data/Makefile.in

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/mysql/plugin/ha_mroonga.so.0.0.0

.include <bsd.port.mk>
