#include "pch.h"
#include "CppUnitTest.h"
#include "..\\glab8.1it\lab.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
    TEST_CLASS(UnitTest2)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            // Arrange
            const char* inputStr = "no one knows";

            // Act
            int result = Count(inputStr);

            // Assert
            Assert::AreEqual(2, result);
        }
    };
}