#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

using std::string;

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &tocopy);
		Dog &operator=(Dog const &toassign);
		~Dog(void);

		void	makeSound(void) const;

		//getters
		// string	const &getType(void) const;
};

#endif