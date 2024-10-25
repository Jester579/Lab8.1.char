#include "pch.h"
#include "CppUnitTest.h"
#include <cstring>  
#include "../Lab8.1.char/Source.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(Test)
		{
			char s[] = "abcdef";
			char* t = new char[strlen(s) + 1];

			strcpy(t, s);

			Assert::AreEqual(s,t);

			delete[] t;
		}
	};
}
