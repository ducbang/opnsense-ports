--- chrome/browser/ui/startup/bad_flags_prompt.cc.orig	2022-10-01 07:40:07 UTC
+++ chrome/browser/ui/startup/bad_flags_prompt.cc
@@ -90,7 +90,7 @@ static const char* kBadFlags[] = {
 
 // TODO(crbug.com/1052397): Revisit the macro expression once build flag switch
 // of lacros-chrome is complete.
-#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS_LACROS) || BUILDFLAG(IS_BSD)
     // Speech dispatcher is buggy, it can crash and it can make Chrome freeze.
     // http://crbug.com/327295
     switches::kEnableSpeechDispatcher,
