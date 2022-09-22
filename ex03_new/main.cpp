#include "ICharacter.hpp"
#include "Ice.hpp"
#include "colours.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

int	main(void)
{
	cout << BYEL "Testing AMateria..." RESET << endl << endl;;
	cout << UWHT "Constructing an Ice Materia.." RESET << endl;
	Ice a;
	cout << endl;
	
	cout << UWHT "Getting the type..." RESET << endl;
	cout << a.getType() << endl << endl;

	cout << BYEL "Testing copy constructor..." RESET << endl << endl;
	Ice b(a);
	cout << endl;

	cout << UWHT "Getting the type..." RESET << endl;
	cout << b.getType() << endl << endl;

	cout << BYEL "Testing assignment operator..." RESET << endl << endl;
	Ice c;
	c = a;
	cout << endl;

	cout << UWHT "Getting the type..." RESET << endl;
	cout << c.getType() << endl << endl;
}