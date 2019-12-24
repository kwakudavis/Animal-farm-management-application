#pragma once
#include "Animal.h"
class Cat :
	public Animal
{

private:


public:
	const std::string m_cat;


	Cat();

	void purr();
	void makeSound();


	bool feed();
};

