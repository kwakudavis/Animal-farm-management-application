#pragma once
#include "Animal.h"
#include <string>
class Cow :
	public Animal
{
private:
	


public:
	Cow();

	bool m_feed();

	void makeSound();

	void exercise();
};

