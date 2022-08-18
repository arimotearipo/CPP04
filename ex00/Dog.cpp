#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(void) : _type("Dog")
{
	cout << BLU << "[DOG CLASS CONSTRUCTED]" << RESET << endl;
}

Dog::Dog(Dog const &tocopy) : _type("Dog")
{
	*this = tocopy;
}

Dog	&Dog::operator=(Dog const &toassign)
{
	this->_type = toassign._type;
	return (*this);
}

Dog::~Dog(void)
{
	cout << RED << "[DOG CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Dog::makeSound(void)
{
	cout << GRN << "Woof woof" << RESET << endl;
}

string	Dog::getType(void)
{
	return (this->_type);
}