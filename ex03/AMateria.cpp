#include "AMateria.hpp"
#include "ICharacter.hpp"

using std::cout;
using std::endl;
using std::string;

AMateria::AMateria(void) : _dropped(YES)
{
	cout << BLU << "[AMATERIA CLASS CONSTRUCTED]" << RESET << endl;
}

AMateria::AMateria(string const &type) : _dropped(YES)
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
		cout << WHT << "* shoots an ice bolt at " << target.getName() << " *" << RESET << endl;
	if (getType() == "cure")	
		cout << WHT << "* heals " << target.getName() << "'s wounds *" << RESET << endl;
}

int		AMateria::getDroppedStatus(void)
{
	return (this->_dropped);
}

void	AMateria::setDroppedStatus(int status)
{
	if (status != YES || status != NO)
	{
		cout << RED << "WRONG INPUT" << RESET << endl;
		return ;
	}
	this->_dropped = status;
}

string	AMateria::getType(void)
{
	return (this->_type);
}