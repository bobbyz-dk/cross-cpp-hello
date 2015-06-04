#include "CommonLibrary.AndroidW.h"
#include "CommonLibrary.Android.h"
#ifdef __cplusplus
extern "C" {
#endif

	JNIEXPORT jstring JNICALL Java_dk_bobbyz_helloworldvcppandroidapp_CommonLibrary_hello
		(JNIEnv * env, jobject obj, jstring hello)
	{
		CommonLibrary *lib = new CommonLibrary();
		const char *str = env->GetStringUTFChars(hello, 0);
		//std::string helloStr(str);
		std::string strHello = lib->helloWorld(str);
		env->ReleaseStringUTFChars(hello, str);
		return env->NewStringUTF(strHello.c_str());
	}

#ifdef __cplusplus
}
#endif
