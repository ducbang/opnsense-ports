--- libs/pika/coroutines/include/pika/coroutines/detail/context_impl.hpp.orig	2022-10-05 07:55:59 UTC
+++ libs/pika/coroutines/include/pika/coroutines/detail/context_impl.hpp
@@ -112,7 +112,7 @@ namespace pika { namespace threads { namespace corouti
         generic_context::fcontext_context_impl<CoroutineImpl>;
 }}}}    // namespace pika::threads::coroutines::detail
 
-#elif (defined(__linux) || defined(linux) || defined(__linux__)) &&            \
+#elif (defined(__linux) || defined(linux) || defined(__linux__) || defined(__FreeBSD__)) &&            \
     !defined(__bgq__) && !defined(__powerpc__) && !defined(__s390x__) &&       \
     !defined(__arm__) && !defined(__arm64__) && !defined(__aarch64__)
 
