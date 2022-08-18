#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	Animal *a = new Cat;
	Animal *b = new Dog;
	a->makeSound();
	b->makeSound();
	return (0);
}