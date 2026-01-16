#pragma once
#include "animal.h"
class dog : public animal
{
public:
	dog(int age, const string& name,
		const string& breed, int weight);
	~dog() override;
	void makeSound() override;

private:
	string mBreed;

	int mWeight; //in grams
};
