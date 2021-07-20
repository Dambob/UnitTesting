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
		
		TEST_METHOD(personNameInit)
		{
			//Setup
			std::string name = "Bill";
			
			// Work
			Person p(name);
			
			// Check
			Assert::AreEqual(name, p.GetName());
		}

		TEST_METHOD(personNameSet)
		{
			// Setup
			std::string name = "Bill", name2 = "Ben";

			// Work
			Person p(name);
			p.SetName(name2);

			// Check
			Assert::AreNotEqual(name, p.GetName());
			Assert::AreEqual(name2, p.GetName());
		}
	};
}
