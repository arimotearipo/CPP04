#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &tocopy);
		~Cure(void);

		Cure	&operator=(Cure const &tocopy);

		Cure 	*clone(void) const;
		void	use(ICharacter &target);
};

#endif