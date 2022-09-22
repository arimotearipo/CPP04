#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

using std::string;

class	AMateria
{
	private:

	protected:
		string		_type;

	public:
		AMateria(void); // this is just to comply with the orthodox canonical form
		AMateria(string const& type);
		AMateria(AMateria const& tocopy);
		~AMateria(void);

		AMateria& operator=(AMateria const& toassign);

		string const 	&getType() const;

		virtual	AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif