#include "AMateria.hpp"
#include "colours.h"

using std::string;
using std::cout;
using std::endl;

AMateria::AMateria(string const& type) : _type(type)
{
	cout << BLU "[AMATERIA CONSTRUCTED WITH PARAMETER]" RESET << endl;
}

AMateria::AMateria(AMateria const& tocopy) : _type(tocopy.getType())
{
	cout << BLU "[AMATERIA CONSTRUCTED BY COPY]" RESET << endl;
}

AMateria::~AMateria(void)
{
	cout << RED "[AMATERIA DECONSTRUCTED]" RESET << endl;
}

AMateria&	const AMateria::operator=(AMateria const& toassign)
{
	this->_type = toassign.getType();
}

string const &AMateria::getType(void) const
{
	return (this->_type);
}