--- validator-session/validator-session.cpp.orig	2020-06-03 17:47:47 UTC
+++ validator-session/validator-session.cpp
@@ -705,11 +705,16 @@ void ValidatorSessionImpl::request_new_block(bool now)
     requested_new_block_now_ = true;
     td::actor::send_closure(catchain_, &catchain::CatChain::need_new_block, td::Timestamp::now());
   } else {
-    double lambda = 10.0 / description().get_total_nodes();
+    double lambda = 0.5 / description().get_total_nodes();
     double x = -1 / lambda * log(td::Random::fast(1, 999) * 0.001);
-    if (x > 0.5) {
-      x = 0.5;
+    const double min_delay = 1.5, max_delay=4;
+    if (x > max_delay) {
+      x = max_delay;
     }
+    if (x < min_delay) {
+      x = min_delay;
+    }
+
     td::actor::send_closure(catchain_, &catchain::CatChain::need_new_block, td::Timestamp::in(x));
   }
 }
