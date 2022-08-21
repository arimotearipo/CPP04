#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

using std::string;

class ICharacter
{
	public:
		ICharacter(void);
		ICharacter(ICharacter const &c);
		ICharacter &operator=(ICharacter const &c);
		virtual ~ICharacter(void);

		virtual string const &getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

#endif