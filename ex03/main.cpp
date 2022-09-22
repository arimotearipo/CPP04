#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "colours.h"
#include <iostream>
#include <stdlib.h> // to use system leaks

using std::string;
using std::cout;
using std::endl;


// main() to test AMateria
// int	main(void)
// {
// 	cout << BYEL "Testing AMateria..." RESET << endl << endl;;
// 	cout << UWHT "Constructing an Ice Materia.." RESET << endl;
// 	Ice a;
// 	cout << endl;
	
// 	cout << UWHT "Getting the type..." RESET << endl;
// 	cout << a.getType() << endl << endl;

// 	cout << BYEL "Testing copy constructor..." RESET << endl << endl;
// 	Ice b(a);
// 	cout << endl;

// 	cout << UWHT "Getting the type..." RESET << endl;
// 	cout << b.getType() << endl << endl;

// 	cout << BYEL "Testing assignment operator..." RESET << endl << endl;
// 	Ice c;
// 	c = a;
// 	cout << endl;

// 	cout << UWHT "Getting the type..." RESET << endl;
// 	cout << c.getType() << endl << endl;

// }

// main() to test Character
int	main(void)
{
	cout << BYEL "Instantiating a character named Alduin..." RESET << endl;
	ICharacter *a = new Character("Alduin");
	AMateria *one = new Ice();
	AMateria *two = new Cure();
	AMateria *three = new Ice();
	AMateria *four = new Cure();

	a->equip(one);
	a->equip(two);
	a->equip(three);
	a->equip(four);
	a->showInventory();

	return (0);
}