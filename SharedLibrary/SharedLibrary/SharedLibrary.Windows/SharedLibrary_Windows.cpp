#include "SharedLibrary_Windows.h"
#include "SharedLibrary.h"

char * SharedLibraryWindows::getTemplateInfo() {
    return SharedLibrary::getTemplateInfo();
}

std::string SharedLibraryWindows::hello(std::string world)
{
	SharedLibrary *lib = new SharedLibrary();
	return lib->hello(world);
}