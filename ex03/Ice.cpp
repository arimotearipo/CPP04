#include "Ice.hpp"

using std::string;
using std::cout;
using std::endl;

Ice::Ice(void)
{
	cout << BLU << "[ICE CLASS CONSTRUCTED]" << RESET << endl;
}

Ice::Ice(Ice const &tocopy)
{
	cout << BLU << "[ICE CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	*this = tocopy;
}

Ice	&Ice::operator=(Ice const &toassign)
{
	cout << BLU << "[ICE CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	this->_type = toassign._type;
}

AMateria	*Ice::clone(void) const
{
	return (new Ice);
}