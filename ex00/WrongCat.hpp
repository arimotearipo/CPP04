#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &tocopy);
		WrongCat &operator=(WrongCat const &toassign);
		~WrongCat(void);

		void	makeSound(void) const;

		//getters
		// string	const &getType(void) const;
	private:
		string _type;
};

#endif