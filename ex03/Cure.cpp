#include "Cure.hpp"

using std::cout;
using std::endl;
using std::string;

Cure::Cure(void)
{
	cout << BLU << "[CURE CLASS CONSTRUCTED]" << RESET << endl;
}

Cure::Cure(Cure const &tocopy)
{
	cout << BLU << "[CURE CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	this->_type = tocopy._type;
}

Cure	&Cure::operator=(Cure const &toassign)
{
	cout << BLU << "[CURE CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	*this = toassign;
}

Cure::~Cure(void)
{
	cout << RED << "[CURE CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Cure::use(ICharacter &target)
{
	cout << WHT << "* heals " << target << "'s wounds *" << RESET << endl;
}

AMateria *Cure::clone(void) const
{
	return (new Cure);
}