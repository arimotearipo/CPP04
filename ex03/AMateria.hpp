#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

using std::string;

class AMateria
{
	public:
		AMateria(string const &type);
		
		string	const &getType(void) const;
	protected:
};

#endif