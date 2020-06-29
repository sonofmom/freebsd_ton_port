From db9d4de1fa406c43c37fdf67eddef41df199e150 Mon Sep 17 00:00:00 2001
From: sonofmom <sonofmom@localhost>
Date: Fri, 22 May 2020 01:23:39 +0200
Subject: [PATCH] Add Freebsd to preprocessor of rlimit.cpp

--- tdutils/td/utils/port/rlimit.cpp.orig	2020-06-03 17:47:47 UTC
+++ tdutils/td/utils/port/rlimit.cpp
@@ -17,7 +17,7 @@
     Copyright 2019-2020 Telegram Systems LLP
 */
 #include "rlimit.h"
-#if TD_LINUX || TD_ANDROID
+#if TD_LINUX || TD_ANDROID || TD_FREEBSD
 #include <unistd.h>
 #include <sys/types.h>
 #include <sys/time.h>
