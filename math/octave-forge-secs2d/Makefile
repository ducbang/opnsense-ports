PORTNAME=	octave-forge-secs2d
PORTVERSION=	0.0.8
PORTREVISION=	27
CATEGORIES=	math

MAINTAINER=	stephen@FreeBSD.org
COMMENT=	Octave-forge package ${OCTAVE_PKGNAME}
WWW=		http://octave.sourceforge.net/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

MASTER_SITE_OLD=	R2009_05

GNU_CONFIGURE=	yes

post-patch:
	${REINPLACE_CMD} -E 's/Octave_map/octave_map/g' ${WRKSRC}/src/*.cc

.include "${.CURDIR}/../../Mk/bsd.octave.mk"
.include <bsd.port.mk>
