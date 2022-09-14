#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	cout << UWHT "Instantiating a Cat object..." RESET << endl;
	Animal *a = new Cat;
	cout << UWHT "Checking the type..." RESET << endl;
	cout << endl;

	cout << UWHT "Instantiating a Dog object..." RESET << endl;
	Animal *b = new Dog;
	cout << endl;

	cout << UWHT "Calling makeSound() on Cat instance..." RESET << endl;
	a->makeSound();
	cout << endl;

	cout << UWHT "Calling makeSound() on Dog instance..." RESET << endl;
	b->makeSound();
	cout << endl;
	return (0);
}