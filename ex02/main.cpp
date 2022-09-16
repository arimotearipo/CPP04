#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

void	testAnimals(int n)
{
	if (n % 2 != 0)
		return ;
	Animal	*arr[n];
	cout << endl;
	cout << WHT << "CREATING ANIMALS..." << RESET << endl;
	for (int i = 0; i < n; i++)
	{
		cout << BLU << i << endl;
		if (i % 2 == 0)
			arr[i] = new Cat;
		else
			arr[i] = new Dog;
	}
	// cout << endl;
	// cout << WHT << "WRITING IDEAS..." << RESET << endl;
	// for (int i = 0; i < n; i++)
	// {
	// 	arr[i]->_brain->expressYourself();
	// }
	cout << endl;
	cout << WHT << "DELETING ANIMALS..." << RESET << endl;
	for (int i = 0; i < n; i++)
	{
		cout << RED << i << endl;
		delete arr[i];
	}
}

int	main(void)
{
	testAnimals(6);
	// Animal *a = new Animal; //this should give error
	// Animal *b = new Dog;
	// Animal *c = new Cat;
	// delete b;
	// delete c;
	return (0);
}