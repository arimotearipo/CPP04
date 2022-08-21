#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class	Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &tocopy);
		Cure &operator=(Cure const &toassign);
		~Cure(void);

		virtual AMateria *clone(void) const;
		virtual void use(ICharacter &target);
};

#endif