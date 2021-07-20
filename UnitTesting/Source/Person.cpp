#include <Person.h>

Person::Person(std::string name)
{
	mName = name;
}

std::string Person::GetName()
{
	return mName;
}