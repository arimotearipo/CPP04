#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

using std::string;

class	AMateria
{
	private:
		AMateria(void);

	protected:
		string		_type;

	public:
		AMateria(string const& type);
		AMateria(AMateria const& tocopy);
		~AMateria(void);

		AMateria& operator=(AMateria const& toassign);

		string const 	&getType() const;

		virtual	AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif