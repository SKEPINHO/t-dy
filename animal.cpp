#include "animal.h"
#include <iostream>

animal::animal(int age, const string& name)
	: mAge(age), mName(name)
{
	cout << "Animal constructor called for " << mName << endl;
}

animal::~animal()
{
	cout << "Animal destructor called for " << mName << endl;
}

void animal::makeSound()
{
	cout << mName << " makes a sound." << endl;
}
