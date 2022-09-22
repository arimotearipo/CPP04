#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class	Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(Ice const &tocopy);
		virtual ~Ice(void);

		Ice &operator=(Ice const &toassign);

		Ice*	clone(void) const;
		void	use(ICharacter &target);
};

#endif