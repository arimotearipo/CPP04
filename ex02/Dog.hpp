#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

using std::string;

class	Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(Dog const &tocopy);
		Dog &operator=(Dog const &toassign);
		~Dog(void);

		void	makeSound(void);

		void	expressBrain(unsigned n) const;
};

#endif