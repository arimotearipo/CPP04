#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define	NO 0
#define YES 1

#include <iostream>
#include "ICharacter.hpp"
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

		int		getDroppedStatus(void); // returns the status of the Materia whether still being equipped by the character or not
		void	setDroppedStatus(int status);
		string	getType(void);

	protected:
		string	_type;
		int		_dropped;
};

#endif