#include "CommonLibrary.h"

#define PLATFORM_ANDROID 0
#define PLATFORM_IOS 1
#define PLATFORM_WP 2

char * CommonLibrary::getTemplateInfo()
{
#if PLATFORM == PLATFORM_IOS
	static char info[] = "Platform for iOS";
#elif PLATFORM == PLATFORM_ANDROID
	static char info[] = "Platform for Android";
#elif PLATFORM == PLATFORM_WP
	static char info[] = "Platform for WP";
#else
	static char info[] = "Undefined platform";
#endif

	return info;
}

CommonLibrary::CommonLibrary()
{
}

CommonLibrary::~CommonLibrary()
{
}

std::string CommonLibrary::helloWorld(std::string world)
{
	return "Hello " + world;
}
