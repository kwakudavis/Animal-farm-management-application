#pragma once
#include "Animal.h"

class Dog :
	public Animal
{

private:
	const std::string m_dog = "Dog";



public:

	Dog();
	void makeSound();

	bool m_feed();

	void exercise();
};

