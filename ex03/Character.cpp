#include <cstdlib>
#include "Character.hpp"
#include "colours.h"

using std::cout;
using std::endl;

AMateria *Character::hold = NULL;

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
	if (this->hold != NULL)
		delete this->hold;
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
			return ;
		}
	}
	delete m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		cout << "Invalid index or inventory location is already empty" << endl;
		return ;
	}
	if (this->hold != NULL)
		delete this->hold;
	this->hold = this->_inventory[idx];
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL)
	{
		cout << GRN "Kaput." RESET << endl;
		return ;
	}
	this->_inventory[idx]->use(target);
	cout << GRN << this->_name << " used " << this->_inventory[idx]->getType() << " at " << target.getName() << RESET << endl;
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
			cout << i << ": " << "[EMPTY]" << " " << endl; 
		else
			cout << i << ": " << this->_inventory[i]->getType() << " " << endl;
	}
}