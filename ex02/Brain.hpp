#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "colours.h"

using std::string;

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &tocopy);
		Brain &operator=(Brain const &toassign);
		~Brain(void);

		void	expressYourself(void);
	private:
		string	_ideas[100];
};

#endif