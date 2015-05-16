#include <string>

class SharedLibrary {
public:
    static char * getTemplateInfo();
    SharedLibrary();
    ~SharedLibrary();

	std::string hello(std::string world);
};
