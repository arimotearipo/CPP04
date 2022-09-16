#include "Animal.hpp"

using std::cout;
using std::endl;

Animal::Animal(void)
{
	cout << BLU << "[ANIMAL CLASS CONSTRUCTED]" << RESET << endl;
}

Animal::Animal(Animal const &tocopy)
{
	*this = tocopy;
	cout << BLU "[ANIMAL CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

Animal	&Animal::operator=(Animal const &toassign)
{
	this->_type = toassign._type;
	cout << BLU "[ANIMAL CLASS CONSTRUCTED BY ASSIGNMENT]" RESET << endl;
	return (*this);
}

Animal::~Animal(void)
{
	cout << BLU << "[ANIMAL CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Animal::makeSound(void)
{
	cout << BLU "Animal::makeSound(): " << BGRN << "...?" RESET << endl;
}