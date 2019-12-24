#include "Dog.h"
#include <string>
#include <iostream>

Dog::Dog():Animal("Dog") {}



void Dog::makeSound()
{
	std::cout << "The dog is barking" << std::endl;
}

bool Dog::m_feed() {
	
	if (Animal::m_feed() == true) {

		std::cout << "The dog is wagging its Tail" << std::endl;
		return true;
	}
	else{
		return false;
	}
	
}


void Dog::exercise() {
	Dog::makeSound();
	Animal::exercise();
}