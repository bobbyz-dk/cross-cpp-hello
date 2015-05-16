#pragma once
#include "pch.h"
#include <string>
#include "CommonLibrary.h"

class CommonLibraryAndroid {
private:
	CommonLibrary *lib;
public:
	static char * getTemplateInfo();
	CommonLibraryAndroid();
	~CommonLibraryAndroid();
	std::string helloWorld(std::string world);
};
