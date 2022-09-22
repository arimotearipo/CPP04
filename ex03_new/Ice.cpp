#include "Ice.hpp"
#include "colours.h"

using std::cout;
using std::endl;

Ice::Ice(void) : AMateria("ice")
{
	cout << BLU "[ICE CLASS CONSTRUCTED]" RESET << endl;
}

Ice::Ice(string const& type) : AMateria(type)
{
	cout << BLU "[ICE CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

Ice::~Ice(void)
{
	cout << RED "[ICE CLASS DECONSTRUCTED]" RESET << endl;
}

Ice &Ice::operator=(Ice const &tocopy)
{
	this->_type = tocopy.getType();
	return (*this);
}

Ice	*Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	cout << GRN "* shoots an ice bolt at " << target.getName() << " *" RESET << endl;
}