#include "SharedLibrary.h"
#define INFO "This template provides an example for sharing code between Windows and Android Platforms."

char * SharedLibrary::getTemplateInfo()
{
    return INFO;
}

SharedLibrary::SharedLibrary()
{
}

SharedLibrary::~SharedLibrary()
{
}

std::string SharedLibrary::hello(std::string world)
{
	return "Hello " + world;
}
