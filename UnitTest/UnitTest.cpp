#include "pch.h"
#include "CppUnitTest.h"
//#include "../UnitTesting/Headers/XXX.h"
//#include "../UnitTesting/Source/XXX.cpp"
#include "../UnitTesting/Headers/Person.h"
#include "../UnitTesting/Source/Person.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			/// TODO: test code here
			std::string name = "Bill";
			Person p(name);
			Assert::AreEqual(name, p.GetName());
		}
	};
}
