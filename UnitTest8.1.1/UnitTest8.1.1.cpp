#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest811
{
	TEST_CLASS(UnitTest811)
	{

	public:

		TEST_METHOD(TestMethod1)
		{
			char str[101] = "abc";
			int l = Count(str);
			Assert::AreEqual(l, 1);
		}

	};
}
