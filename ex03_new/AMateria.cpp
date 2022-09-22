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

AMateria &AMateria::operator=(AMateria const &toassign)
{
	if (this != &toassign)
		this->_type = toassign.getType();
	return (*this);
	// this->_type = toassign.getType();
}

string const &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target; // just tempoerary
	cout << WHT "using some unknown Materia on target" RESET << endl;
}