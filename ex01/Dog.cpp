#include "Dog.hpp"

using std::cout;
using std::endl;

Dog::Dog(void) : _type("Dog")
{
	this->_brain = new Brain();
	cout << CYN << "[DOG CLASS CONSTRUCTED]" << RESET << endl;
}

Dog::Dog(Dog const &tocopy) : Animal(), _type(tocopy.getType()), _brain(new Brain(*(tocopy._brain)))
{
	cout << CYN << "[DOG CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Dog	&Dog::operator=(Dog const &toassign)
{
	this->_type = toassign._type;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*(toassign._brain));
	cout << CYN << "[DOG CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

Dog::~Dog(void)
{
	delete this->_brain;
	cout << CYN << "[DOG CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Dog::makeSound(void)
{
	cout << CYN "Dog::makeSound() " << BGRN << "Woof woof" << RESET << endl;
}

void	Dog::expressBrain(unsigned n) const
{
	this->_brain->expressYourself(n);
}