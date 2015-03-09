#include "pch.h"
#include "CppUnitTest.h"
#include "SharedLibrary_Windows.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PhoneUnitTestApp
{
    TEST_CLASS(UnitTest1)
    {
    public:
		SharedLibraryWindows* lib;

        TEST_METHOD(TestMethod1)
        {
			lib = new SharedLibraryWindows();
			Assert::AreEqual(std::string("Hello Bobby"), lib->hello("Bobby"));
        }
    };
}