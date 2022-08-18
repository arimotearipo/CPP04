#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "colours.h"
#include "Brain.hpp"

using std::string;

class	Animal
{
	public:
		Animal	&operator=(Animal const &toassign);
		virtual ~Animal(void);

		void	makeSound(void);
	protected:
		string	_type;
		Animal(void);
		Animal(Animal const &tocopy);
};

#endif