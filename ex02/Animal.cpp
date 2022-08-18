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
}

Animal	&Animal::operator=(Animal const &toassign)
{
	this->_type = toassign._type;
	return (*this);
}

Animal::~Animal(void)
{
	cout << RED << "[ANIMAL CLASS DECONSTRUCTED]" << RESET << endl;
}

// void	makeSound(void)
// {
// 	cout << "...?" << endl;
// }