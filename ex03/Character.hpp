#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "Floor.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(string const &name);
		Character(Character const &tocopy);
		Character &operator=(Character const &toassign);
		~Character(void);

		string const 	&getName() const;
		void			equip(AMateria *m);
		void			unequip(int idx);
		void 			use(int idx, ICharacter &target);
	private:
		string			_name;
		AMateria		*_inv[4];
		int				_inv_count;
		static	Floor	_floor;
		
};

#endif