From 2c5f5aa598a7589714b851e34c2e703c6127810f Mon Sep 17 00:00:00 2001
From: Slava <slava@qey.ai>
Date: Sun, 19 Apr 2020 21:35:14 +0300
Subject: [PATCH] Fix for neighbours unreliability

--- validator/full-node-shard.cpp.orig	2020-06-03 17:47:47 UTC
+++ validator/full-node-shard.cpp
@@ -960,7 +960,8 @@ void FullNodeShardImpl::got_neighbour_capabilities(adn
     it->second.query_failed();
   } else {
     it->second.update_proto_version(*F.move_as_ok().get());
-    it->second.update_roundtrip(t);
+    it->second.query_success(t);
+//    it->second.update_roundtrip(t);
   }
 }
 
