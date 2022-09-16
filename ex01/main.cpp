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
	cout << UWHT << "CREATING " << n << " ANIMALS..." << RESET << endl;
	for (int i = 0; i < n; i++)
	{
		cout << BLU << i << RESET << endl;
		if (i % 2 == 0)
			arr[i] = new Cat;
		else
			arr[i] = new Dog;
	}
	cout << endl;
	cout << UWHT << "WRITING IDEAS..." << RESET << endl;
	for (int i = 0; i < n; i++)
	{
		arr[i]->expressBrain(5);
	}
	cout << endl;
	cout << UWHT << "DELETING " << n << " ANIMALS..." << RESET << endl;
	for (int i = 0; i < n; i++)
	{
		cout << RED << i << endl;
		delete arr[i];
	}
}

int	main(void)
{
	testAnimals(30);

	// srand(time(NULL));
	
	// cout << endl;
	// cout << UWHT "Creating Dog object..." RESET << endl;
	// Animal	*a = new Dog;
	// cout << endl;
	// cout << UWHT "Creating Cat object..." RESET << endl;
	// Animal	*b = new Cat;
	// cout << endl;

	// cout << UWHT "Printing Dog object..." RESET << endl;
	// cout << a << endl;
	// cout << endl;

	// cout << UWHT "Printing Cat object..." RESET << endl;
	// cout << b << endl;
	// cout << endl;

	// cout << UWHT "Deleting Dog object..." RESET << endl;
	// delete a;
	// cout << endl;

	// cout << UWHT "Deleting Cat object..." RESET << endl;
	// delete b;
	// cout << endl;

	// cout << UWHT "Creating first Cat object (x)..." RESET << endl;
	// Cat x;
	// cout << endl;

	// cout << UWHT "Printing ideas of Cat object (x)..." RESET << endl;
	// x.expressBrain(10);
	// cout << endl;

	// cout << UWHT "Creating second Cat object (y)..." RESET << endl;
	// Cat y;
	// cout << endl;

	// cout << UWHT "Printing ideas of Cat object (y)..." RESET << endl;
	// y.expressBrain(10);
	// cout << endl;

	// cout << UWHT "Assigning second cat object to first cat object..." RESET << endl;
	// y = x;
	// cout << endl;

	// cout << UWHT "Printing ideas of Cat object (y)..." RESET << endl;
	// y.expressBrain(10);
	// cout << endl;

	// cout << UWHT "Creating third Cat object (z) and copying (y) into it..." RESET << endl;
	// Cat z(y);
	// cout << endl;

	// cout << UWHT "Printing ideas of Cat object (z)..." RESET << endl;
	// z.expressBrain(10);
	// cout << endl;


	return (0);
}