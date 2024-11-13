#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab№9.2.1/AP_Lab№9.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestSQR)
        {
            int x = 4;
            int result = SQR(x);
            Assert::AreEqual(16, result);
        }

        TEST_METHOD(TestMAX)
        {
            int a = 5, b = 3;
            int result = MAX(a, b);
            Assert::AreEqual(5, result);
        }
    };
}