# Created by: Kirill Alder (sonofmom92@gmail.com)

PORTNAME=      ton-node 
DISTVERSIONPREFIX=v
DISTVERSION=   0.2.alpha
PORTREVISION=  0

USE_GITHUB=    yes
GH_ACCOUNT=    newton-blockchain
GH_PROJECT=    ton
GH_TAGNAME=    5e1db6f
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
COMMENT=       Telegram Open Network (TON) blockchain platform

USERS=        tond
GROUPS=       tond

USES=		cmake
CMAKE_ON=	USE_RTTI

#DISTDIR=	/tmp

post-install:
	${MKDIR} ${STAGEDIR}/var/db/ton
	${CHMOD} 0750 ${STAGEDIR}/var/db/ton
	${CHOWN} tond:tond ${STAGEDIR}/var/db/ton

.include <bsd.port.mk>
