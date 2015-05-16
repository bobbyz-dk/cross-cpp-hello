#include "CommonLibrary.h"
#include "CommonLibrary.Android.h"

CommonLibraryAndroid::CommonLibraryAndroid()
{
	lib = new CommonLibrary();
}

CommonLibraryAndroid::~CommonLibraryAndroid()
{
}

char * CommonLibraryAndroid::getTemplateInfo()
{
	return CommonLibrary::getTemplateInfo();
}

std::string CommonLibraryAndroid::helloWorld(std::string world)
{
	return lib->helloWorld(world);
}