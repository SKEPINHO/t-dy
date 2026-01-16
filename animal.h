#pragma once

#include <string>
using namespace std;

class animal
{

public:
	animal(int age, const string& name);
	virtual ~animal();
	virtual void makeSound();

protected:
	int mAge;
	string mName;

private:

};
