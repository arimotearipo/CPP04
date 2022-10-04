#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	private:
		Brain	*_brain;

	public:
		Cat(void);
		Cat(Cat const &tocopy);
		Cat &operator=(Cat const &toassign);
		~Cat(void);

		void	makeSound(void);

		void	expressBrain(unsigned n) const;
};

#endif