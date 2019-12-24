#include "Cow.h"
#include <string>
#include <iostream>



Cow::Cow():Animal("Cow") {
   

	setHungry(true);
};



bool Cow::m_feed() {

	std::cout<<"The cow is eating"<<std::endl;
	setHungry(true);
	return true;
}


void Cow::makeSound(){
	std::cout << "The cow is Mooing" << std::endl;
}





void Cow::exercise() {

	makeSound();

}
