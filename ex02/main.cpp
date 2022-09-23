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

void	testAssignment(void)
{
	cout << BYEL "TESTING ASSIGNMENT" RESET << endl;
	Dog a;
	Dog b;
	cout << "Printing Dog a's brain" << endl;
	a.expressBrain(5);
	cout << "Printing Dog b's brain" << endl;
	b.expressBrain(5);
	cout << "Assigning Dog b to Dog a" << endl;
	a = b;
	cout << "Printing Dog a's brain" << endl;
	a.expressBrain(5);
	cout << "Printing Dog b's brain" << endl;
	b.expressBrain(5);
}

void	testCopy(void)
{
	cout << BYEL "TESTING COPY CONSTRUCTOR" RESET << endl;
	Dog a;
	cout << "Printing Dog a's brain before creating Dog b" << endl;
	a.expressBrain(5);
	cout << endl;
	cout << "Creating Dog b by copying dog a" << endl;
	Dog b(a);
	cout << "Printing Dog a's brain" << endl;
	a.expressBrain(5);
	cout << "Printing Dog b's brain" << endl;
	b.expressBrain(5);
}

void	testCreatingAnimal(void)
{
	cout << BYEL "Trying to create an instance of the Animal class" RESET << endl;
	// Animal a; /* Uncomment this line to test */
}

int	main(void)
{
	// testCreatingAnimal();
	// testAnimals(6);
	// testCopy();
	testAssignment();
	// Animal *a = new Animal; //this should give error
	// Animal *b = new Dog;
	// Animal *c = new Cat;
	// delete b;
	// delete c;
	return (0);
}