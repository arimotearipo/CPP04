#include "WrongCat.hpp"

using std::cout;
using std::endl;

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	cout << YEL << "[WRONGCAT CLASS CONSTRUCTED]" << RESET << endl;
}

WrongCat::WrongCat(WrongCat const &tocopy) : WrongAnimal()
{
	*this = tocopy;
	cout << YEL << "[WRONGCAT CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &toassign)
{
	this->_type = toassign._type;
	cout << YEL << "[WRONGCAT CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	cout << YEL << "[WRONGCAT CLASS DECONSTRUCTED]" << RESET << endl;
}

void	WrongCat::makeSound(void) const
{
	cout << YEL << "WRONGCAT::makeSound(): " << BGRN << "Weom Weom" << RESET << endl;
}

// string	const &WrongCat::getType(void) const
// {
// 	return (this->_type);
// }