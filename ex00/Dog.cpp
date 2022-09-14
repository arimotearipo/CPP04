#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(void) : _type("Dog")
{
	cout << MAG << "[DOG CLASS CONSTRUCTED]" << RESET << endl;
}

Dog::Dog(Dog const &tocopy) : Animal(), _type("Dog")
{
	*this = tocopy;
	cout << MAG << "[DOG CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Dog	&Dog::operator=(Dog const &toassign)
{
	this->_type = toassign._type;
	cout << MAG << "[DOG CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

Dog::~Dog(void)
{
	cout << MAG << "[DOG CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Dog::makeSound(void)
{
	cout << MAG << "Dog::makeSound(): " << BGRN << "Woof woof" << RESET << endl;
}

string	const &Dog::getType(void) const
{
	return (this->_type);
}