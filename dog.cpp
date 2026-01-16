#include "dog.h"
#include <iostream>

dog::dog(int age, const string& name,
	const string& breed, int weight)
	: animal(age, name), mBreed(breed), mWeight(weight)
{
	cout << "Dog constructor called for " << mName << endl;
}

dog::~dog()
{
	cout << "Dog destructor called for " << mName << endl;
}

void dog::makeSound()
{
	cout << mName << " barkse." << endl;
}
