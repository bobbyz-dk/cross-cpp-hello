#include "pch.h"
#include "CommonLibrary.WP.h"


CommonLibraryWP::CommonLibraryWP()
{
	lib = new CommonLibrary();
}

CommonLibraryWP::~CommonLibraryWP()
{
}

char * CommonLibraryWP::getTemplateInfo()
{
	return CommonLibrary::getTemplateInfo();
}

String^ CommonLibraryWP::helloWorld(String^ world)
{
	std::wstring ws(world->Data());
	std::string str(ws.begin(), ws.end());
	std::string hello = lib->helloWorld(str);
	std::wstring wid_str = std::wstring(hello.begin(), hello.end());
	const wchar_t* w_char = wid_str.c_str();
	Platform::String^ p_string = ref new Platform::String(w_char);
	return p_string;
}