#include "WrongAnimal.hpp"

using std::cout;
using std::endl;

WrongAnimal::WrongAnimal(void) : _type("")
{
	cout << BLU << "[WRONGANIMAL CLASS CONSTRUCTED]" << RESET << endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &tocopy) : _type("")
{
	*this = tocopy;
	cout << BLU "[WRONGANIMAL CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &toassign)
{
	this->_type = toassign._type;
	cout << BLU "[WRONGANIMAL CLASS CONSTRUCTED BY ASSIGNMENT]" RESET << endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	cout << BLU << "[WRONGANIMAL CLASS DECONSTRUCTED]" << RESET << endl;
}

void	WrongAnimal::makeSound(void) const
{
	cout << BLU "Something is wrong with this WRONGANIMAL" RESET << endl;
}

string	const &WrongAnimal::getType(void) const
{
	return (this->_type);
}