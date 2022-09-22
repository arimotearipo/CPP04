#include <cstdlib>
#include "Character.hpp"
#include "colours.h"

using std::cout;
using std::endl;

Character::Character(void) : _name("unnamed")
{
	for (unsigned i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	cout << BLU "[CHARACTER CLASS CONSTRUCTED]" RESET << endl;
}

Character::Character(string const &name) : _name(name)
{
	for (unsigned i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	cout << BLU "[CHARACTER CLASS CONSTRUCTED WITH PARAMETER]" RESET << endl;
}

Character::Character(Character const &tocopy)
{
	*this = tocopy;
	cout << BLU "[CHARACTER CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

Character::~Character(void)
{
	for (unsigned i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	cout << RED "[CHARACTER CLASS DECONSTRUCTED]" RESET << endl;
}

Character	&Character::operator=(Character const &toassign)
{
	if (this != &toassign)
	{
		this->_name = toassign.getName();
		for (unsigned i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			this->_inventory[i] = toassign._inventory[i]->clone();
		}
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	if (m == NULL)
		return ;
	for (unsigned i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
		return ;
	// need to assign the AMateria at idx to somewhere else. MUST NOT DELETE
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
		return ;
	cout << GRN << this->_name << " used " << this->_inventory[idx] << " at " << target.getName() << RESET << endl;
}

string const &Character::getName(void) const
{
	return (this->_name);
}

void	Character::showInventory(void) const
{
	cout << this->_name << " inventory:" << endl;
	for (unsigned i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			cout << i << ": " << "empty" << " " << endl; 
			continue ;
		}
		cout << i << ": " << this->_inventory[i]->getType() << " " << endl;
	}
}