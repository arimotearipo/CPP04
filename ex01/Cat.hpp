#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &tocopy);
		Cat &operator=(Cat const &toassign);
		~Cat(void);

		void	makeSound(void);

		//getters
		string	getType(void);
	private:
		string _type;
		Brain	*_brain;
};

#endif