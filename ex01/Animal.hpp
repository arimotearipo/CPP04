#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <cstdlib>
#include <iostream>
#include "colours.h"
#include "Brain.hpp"

using std::string;

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const &tocopy);
		Animal	&operator=(Animal const &toassign);
		virtual ~Animal(void);

		void	makeSound(void);
	protected:
		string	_type;
};

#endif