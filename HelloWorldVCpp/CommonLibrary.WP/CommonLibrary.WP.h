#pragma once
#include "pch.h"
#include "CommonLibrary.h"
#include <string>
//#include "vccorlib.h"

using namespace Platform;

class CommonLibraryWP {
private:
	CommonLibrary *lib;
public:
	static char * getTemplateInfo();
	CommonLibraryWP();
	~CommonLibraryWP();
	Platform::String^ helloWorld(String^ world);
};
