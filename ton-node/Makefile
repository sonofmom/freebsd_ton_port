# Created by: Kirill Alder (sonofmom92@gmail.com)

PORTNAME=      ton-node 
DISTVERSIONPREFIX=v
DISTVERSION=   0.9.beta
PORTREVISION=  0

USE_GITHUB=    yes
GH_ACCOUNT=    newton-blockchain
GH_PROJECT=    ton
GH_TAGNAME=    d08f300
GH_TUPLE=      abseil:abseil-cpp:df3ea78:abseilcpp \
               facebook:rocksdb:0915c99:rocksdb \
               ton-blockchain:libRaptorQ:14baff5:libRaptorQ \
               google:crc32c:fd33bcc:crc32c

GH_SUBDIR=     third-party/abseil-cpp:abseilcpp \
               third-party/rocksdb:rocksdb \
               third-party/libraptorq:libRaptorQ \
               third-party/crc32c:crc32c
	       
CATEGORIES=    net-p2p

MAINTAINER=    sonofmom92@gmail.com
COMMENT=       The Open Network (TON) blockchain platform

USERS=        tond
GROUPS=       tond

USES=		cmake
CMAKE_ON=	USE_RTTI CMAKE_INSTALL_DO_STRIP
CMAKE_ARGS=	-D CMAKE_CXX_FLAGS="-march=znver2 -Ofast -ffast-math"

#DISTDIR=	/tmp

post-install:
	${MKDIR} ${STAGEDIR}/var/db/ton
	${CHMOD} 0750 ${STAGEDIR}/var/db/ton
	${CHOWN} tond:tond ${STAGEDIR}/var/db/ton

.include <bsd.port.mk>
