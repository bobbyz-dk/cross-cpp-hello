#pragma once
#include "pch.h"
#include <string>

class CommonLibrary {
public:
    static char * getTemplateInfo();
    CommonLibrary();
    ~CommonLibrary();
	std::string helloWorld(std::string text);
};
