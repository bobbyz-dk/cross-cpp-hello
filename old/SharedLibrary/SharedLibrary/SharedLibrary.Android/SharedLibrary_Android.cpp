#include "SharedLibrary_Android.h"
#include "SharedLibrary.h"

jstring platformABI(JNIEnv* env, jobject thiz)
{
#if defined(__arm__)
#if defined(__ARM_ARCH_7A__)
#if defined(__ARM_NEON__)
#define ABI "armeabi-v7a/NEON"
#else
#define ABI "armeabi-v7a"
#endif
#else
#define ABI "armeabi"
#endif
#elif defined(__i386__)
#define ABI "x86"
#else
#define ABI "unknown"
#endif
    char * templateInfo = SharedLibrary::getTemplateInfo();
    return (*env).NewStringUTF("This library was compiled with ABI: " ABI ".");
}

#ifdef __cplusplus
extern "C" {
#endif
	/*
	* Class:     dk_bobbyz_helloworldcpp_SharedLibrary
	* Method:    hello
	* Signature: (Ljava/lang/String;)Ljava/lang/String;
	*/
JNIEXPORT jstring JNICALL Java_dk_bobbyz_helloworldcpp_SharedLibrary_hello(JNIEnv* env, jobject thiz, jstring world)
{
	SharedLibrary *lib = new SharedLibrary();
	const char *inCStr = env->GetStringUTFChars(world, NULL);
	std::string inStr(inCStr);
	const char* outCStr = (lib->hello(inStr)).c_str();
	return env->NewStringUTF(outCStr);
}
#ifdef __cplusplus
}
#endif