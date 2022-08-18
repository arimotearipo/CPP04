#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "colours.h"

using std::string;

class AMateria
{
	public:
		AMateria(void);
		AMateria(string const &type);
		AMateria(AMateria const &tocopy);
		AMateria &operator=(AMateria const &toassign);
		~AMateria(void);
		
		string	const &getType(void) const;
		virtual AMateria *clone(void) const = 0;
		virtual void use(ICharacter &target);

	protected:
		string	_type;
};

#endif