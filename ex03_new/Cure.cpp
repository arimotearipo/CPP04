#include "Cure.hpp"
#include "colours.h"

using std::cout;
using std::endl;

Cure::Cure(void) : AMateria("cure")
{
	cout << BLU "[CURE CLASS CONSTRUCTED]" RESET << endl;
}

Cure::Cure(Cure const &tocopy) : AMateria(tocopy.getType())
{
	cout << BLU "[CURE CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

Cure::~Cure(void)
{
	cout << RED "[CURE CLASS DECONSTRUCTED]" RESET << endl;
}

Cure	&Cure::operator=(Cure const &toassign)
{
	if (this != &toassign)
		this->_type = toassign.getType();
	return (*this);
}

Cure	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	cout << GRN "* heals " << target.getName() << "’s wounds *" RESET << endl;
}