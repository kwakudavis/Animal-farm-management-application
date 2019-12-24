#include "Farmer.h"
#include "Animal.h"




void Farmer::morningRoutine(Animal& animal)
{

	animal.exercise();
	animal.m_feed();
}

void Farmer::noonRoutine(Animal& animal)
{

	if (animal.isHungry() == true) {

		animal.m_feed();
	}

	
}
