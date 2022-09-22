#include "Ice.hpp"
#include "colours.h"

using std::cout;
using std::endl;

Ice::Ice(void) : AMateria("ice")
{
	cout << BLU "[ICE CLASS CONSTRUCTED]" RESET << endl;
}

Ice::Ice(Ice const &tocopy) : AMateria(tocopy.getType())
{
	*this = tocopy;
	cout << BLU "[ICE CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

Ice::~Ice(void)
{
	cout << RED "[ICE CLASS DECONSTRUCTED]" RESET << endl;
}

Ice &Ice::operator=(Ice const &toassign)
{
	(void)toassign; // doesn't make sense to copy the type
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