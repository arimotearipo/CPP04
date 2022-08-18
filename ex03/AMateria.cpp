#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

AMateria::AMateria(void)
{
	cout << BLU << "[AMATERIA CLASS CONSTRUCTED]" << RESET << endl;
}

AMateria::AMateria(string const &type)
{
	this->_type = type;
	cout << BLU << "[AMATERIA CLASS CONSTRUCTED WITH PARAMETER]" << RESET << endl;
}

AMateria::AMateria(AMateria const &tocopy)
{
	cout << BLU << "[AMATERIA CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	*this = tocopy;
}

AMateria &AMateria::operator=(AMateria const &toassign)
{
	cout << BLU << "[AMATERIA CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	this->_type = toassign._type; // This supposedly doesn't make sense
}

AMateria::~AMateria(void)
{
	cout << RED << "[AMATERIA CLASS DECONSTRUCTED]" << RESET << endl;
}

string const &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	if (getType() == "ice")
		cout << WHT << "* shoots an ice bolt at " << target << " *" << RESET << endl;
	else if (getType() == "cure")
		cout << WHT << "* heals " << target << "'s wounds *" << RESET << endl;
}