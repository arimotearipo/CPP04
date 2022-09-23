#include "Animal.hpp"

using std::cout;
using std::endl;

Animal::Animal(void) : _type("")
{
	cout << BLU << "[ANIMAL CLASS CONSTRUCTED]" << RESET << endl;
}

Animal::Animal(Animal const &tocopy) : _type("")
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

void	Animal::makeSound(void) const
{
	cout << BLU "Animal::makeSound() : ...?" RESET << endl;
}

string	const &Animal::getType(void) const
{
	return (this->_type);
}