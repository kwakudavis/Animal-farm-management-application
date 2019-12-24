#pragma once
#include <string>


class Animal
{
private:
	const std::string m_type;
	bool m_hungry;


protected:
	void setHungry(bool hungry) { m_hungry = hungry; };


public:


	Animal(const std::string type);

	std::string getType() { return m_type; };

	bool isHungry() { return m_hungry; };

	virtual bool m_feed();


	virtual void exercise();

	virtual void makeSound() = 0;



};