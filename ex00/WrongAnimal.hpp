#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include "colours.h"

using std::string;

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &tocopy);
		WrongAnimal	&operator=(WrongAnimal const &toassign);
		virtual ~WrongAnimal(void);

		void	makeSound(void) const;
		string	const &getType(void) const;
	protected:
		string	_type;
};

#endif