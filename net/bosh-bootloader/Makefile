PORTNAME=	bosh-bootloader
PORTVERSION=	7.6.0
PORTREVISION=	7
CATEGORIES=	net sysutils

MAINTAINER=	dumbbell@FreeBSD.org
COMMENT=	CLI for standing up CloudFoundry or Concourse on an IAAS
WWW=		https://github.com/cloudfoundry/bosh-bootloader

LICENSE=	APACHE20

BROKEN_aarch64= fails to build: vendor/golang.org/x/sys/unix/cap_freebsd.go:18:23: undefined: CAP_RIGHTS_VERSION_00

USE_GITHUB=	yes
GH_TUPLE=	cloudfoundry:bosh-bootloader:v${PORTVERSION}

USES=		go tar:xz

GO_PKGNAME=	github.com/cloudfoundry/bosh-bootloader
GO_TARGET=	github.com/cloudfoundry/bosh-bootloader/bbl

PLIST_FILES=	bin/bbl

post-patch:
	${REINPLACE_CMD} -E -e 's|(Version = )"dev"|\1"${PORTVERSION}"|' ${WRKSRC}/bbl/main.go

.include <bsd.port.mk>
