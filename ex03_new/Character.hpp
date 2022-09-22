#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

using std::string;

class Character : public ICharacter
{
	protected:
		string		_name;
		AMateria*	_inventory[4];	

	public:
		Character(void);
		Character(string const &name);
		Character(Character const &tocopy);
		virtual ~Character(void);

		Character &operator=(Character const &toassign);

		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);

		string const	&getName(void) const;
		void	showInventory(void) const;

};

#endif