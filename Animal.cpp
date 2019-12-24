#include "Animal.h"
#include <string>
#include<iostream>

Animal::Animal(const std::string type) :m_type(type) {};

bool Animal::m_feed() {
	if ( m_hungry == true) {
		std::cout<< m_type << "is feeding" ;

		m_hungry = false;
		return true;
	}
	else {

		std::cout << m_type << "is not hungry";
		return false;
	}
	
}



void Animal::exercise() {

	std::cout << m_type << "is exercising";
	m_hungry = true;

}



