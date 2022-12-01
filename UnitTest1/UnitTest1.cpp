#include "pch.h"
#include "CppUnitTest.h"
#include "../lab08.1(it)/lab08.1(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* str = "aabbkbu ccdcc";

			int count = Count(str);

			Assert::AreEqual(4, count);
		}
	};
}
