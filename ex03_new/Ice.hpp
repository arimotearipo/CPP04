#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class	Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(string const &type);
		~Ice(void);

		Ice &operator=(Ice const &tocopy);

		Ice*	clone() const;
		void	use(ICharacter &target);
};

#endif