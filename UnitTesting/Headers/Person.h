#ifndef PERSON
#define PERSON

#include <string>

class Person
{
public:
	Person(std::string name);

	std::string GetName();

private:
	std::string mName;
};

#endif
