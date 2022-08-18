#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int	main(void)
{
	Dog	anjing;
	anjing.makeSound();
	cout << anjing.getType() << endl;
	Cat	kucing;
	kucing.makeSound();
	cout << kucing.getType() << endl;
	return (0);
}