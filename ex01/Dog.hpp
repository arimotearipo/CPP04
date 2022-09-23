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

		void	makeSound(void);

		void	expressBrain(unsigned n) const;
	private:
		string 	_type;
		Brain	*_brain;
};

#endif