#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	cout << BLU << "[CAT CLASS CONSTRUCTED]" << RESET << endl;
}

Cat::Cat(Cat const &tocopy) : Animal(), _brain(new Brain(*(tocopy._brain)))
{
	*this = tocopy;
	cout << YEL << "[CAT CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Cat	&Cat::operator=(Cat const &toassign)
{
	this->_type = toassign._type;
	if (this->_brain != NULL)
		delete this->_brain;
	this->_brain = new Brain(*(toassign._brain));
	cout << YEL << "[CAT CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
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

void	Cat::expressBrain(unsigned n) const
{
	this->_brain->expressYourself(n);
}