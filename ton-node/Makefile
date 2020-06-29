# Created by: Kirill Alder (sonofmom92@gmail.com)

PORTNAME=      ton-node 
DISTVERSION=   20200629
PORTREVISION=  0

USE_GITHUB=    yes
GH_ACCOUNT=    ton-blockchain
GH_PROJECT=    ton
GH_TAGNAME=    dbde9c1
GH_TUPLE=      abseil:abseil-cpp:df3ea78:abseilcpp \
               facebook:rocksdb:0915c99:rocksdb \
               ton-blockchain:libRaptorQ:14baff5:libRaptorQ \
               google:crc32c:fd33bcc:crc32c \
               sonofmom:freebsd_ton_guide:343d3d1:freebsd_ton_guide

GH_SUBDIR=     third-party/abseil-cpp:abseilcpp \
               third-party/rocksdb:rocksdb \
               third-party/libraptorq:libRaptorQ \
               third-party/crc32c:crc32c
	       
CATEGORIES=    net-p2p

MAINTAINER=    sonofmom92@gmail.com
COMMENT=       Telegram Open Network (TON) blockchain platform

USERS=        tond
GROUPS=       tond

#LIB_DEPENDS=	libmhash.so:security/mhash \
#		libpcre.so:devel/pcre

USES=		cmake
CMAKE_ON=	USE_RTTI
#CMAKE_OFF=	CMAKE_VERBOSE_MAKEFILE

#DISTDIR=	/tmp

post-install:
	${MKDIR} ${STAGEDIR}/var/db/ton
	${CHMOD} 0750 ${STAGEDIR}/var/db/ton
	${CHOWN} tond:tond ${STAGEDIR}/var/db/ton

.include <bsd.port.mk>
