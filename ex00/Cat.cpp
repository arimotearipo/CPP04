#include "Cat.hpp"

using std::cout;
using std::endl;

Cat::Cat(void) : Animal()
{
	this->_type = "Cat"; // Using this->_type = "Cat" might also be the same
	cout << YEL << "[CAT CLASS CONSTRUCTED]" << RESET << endl;
}

Cat::Cat(Cat const &tocopy) : Animal()
{
	*this = tocopy;
	cout << YEL << "[CAT CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Cat	&Cat::operator=(Cat const &toassign)
{
	this->_type = toassign._type;
	cout << YEL << "[CAT CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

Cat::~Cat(void)
{
	cout << YEL << "[CAT CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Cat::makeSound(void) const
{
	cout << YEL << "Cat::makeSound(): " << BGRN << "Meow meow" << RESET << endl;
}

// string	const &Cat::getType(void) const
// {
// 	return (this->_type);
// }