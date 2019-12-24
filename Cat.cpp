#include "Cat.h"
#include <string>
#include<iostream>




Cat::Cat() :Animal("Cat") {}

void Cat::purr()
{
	std::cout << "Cat is purring" << std::endl;
}



void Cat::makeSound()
{
	std::cout << "The cat is moewing" << std::endl;
}



bool Cat::feed() {


	if (isHungry() == true) {

		Cat::makeSound();
		Animal::m_feed();
		purr();
		return true;
	}
	else {
		return false;
	}


}