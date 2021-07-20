#ifndef PERSON
#define PERSON

#include <string>

class Person
{
public:
	Person(std::string name);

	std::string GetName();
	void SetName(std::string name);

private:
	std::string mName;
};

#endif
