#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) : _type("Cat")
{
	this->_brain = new Brain();
	cout << "brain address: " << this->_brain << endl;
	cout << BLU << "[CAT CLASS CONSTRUCTED]" << RESET << endl;
}

Cat::Cat(Cat const &tocopy) : _type("Cat")
{
	*this = tocopy;
}

Cat	&Cat::operator=(Cat const &toassign)
{
	this->_type = toassign._type;
	return (*this);
}

Cat::~Cat(void)
{
	delete this->_brain;
	cout << RED << "[CAT CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Cat::makeSound(void)
{
	cout << GRN << "Meow meow" << RESET << endl;
}

string	Cat::getType(void)
{
	return (this->_type);
}