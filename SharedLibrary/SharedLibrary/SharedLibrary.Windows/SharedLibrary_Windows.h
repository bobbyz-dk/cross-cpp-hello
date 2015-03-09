#pragma once

#ifdef SHAREDLIBRARY_WINDOWS_EXPORTS
#define SHAREDLIBRARY_WINDOWS_API __declspec(dllexport)
#else
#define SHAREDLIBRARY_WINDOWS_API __declspec(dllimport)
#endif

#include <string>

class SHAREDLIBRARY_WINDOWS_API SharedLibraryWindows
{
public:
	char * getTemplateInfo();

	std::string hello(std::string world);
};