PORTNAME=	oauth2
PORTVERSION=	1.4.11
CATEGORIES=	net rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby wrapper for the OAuth 2.0 protocol
WWW=		https://github.com/oauth-xx/oauth2

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-faraday>=0.17.3<3.0:www/rubygem-faraday \
		rubygem-jwt>=1.0<3.0:www/rubygem-jwt \
		rubygem-multi_json>=1.3<2:devel/rubygem-multi_json \
		rubygem-multi_xml>=0.5<1:textproc/rubygem-multi_xml \
		rubygem-rack>=1.2,3<4,3:www/rubygem-rack

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PORTSCOUT=	limit:^1\.

.include <bsd.port.mk>
