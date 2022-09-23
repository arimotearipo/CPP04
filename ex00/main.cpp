#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

using std::cout;
using std::endl;

void testCorrect()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
}

void testWrong()
{
	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
}

int	main(void)
{
	cout << BYEL "TESTING CORRECT" << RESET << endl;
	testCorrect();
	cout << endl;
	cout << BYEL "TESTING WRONG" << RESET << endl;
	testWrong();
	cout << endl;
	// cout << UWHT "Instantiating a Cat object..." RESET << endl;
	// Animal *a = new Cat;
	// cout << UWHT "Checking the type..." RESET << endl;
	// cout << endl;

	// cout << UWHT "Instantiating a Dog object..." RESET << endl;
	// Animal *b = new Dog;
	// cout << endl;

	// cout << UWHT "Calling makeSound() on Cat instance..." RESET << endl;
	// a->makeSound();
	// cout << endl;

	// cout << UWHT "Calling makeSound() on Dog instance..." RESET << endl;
	// b->makeSound();
	// cout << endl;

	// cout << UWHT "Deleting Cat object..." RESET << endl;
	// delete a;
	// cout << endl;

	// cout << UWHT "Deleting Dog object..." RESET << endl;
	// delete b;
	// cout << endl;
	return (0);
}