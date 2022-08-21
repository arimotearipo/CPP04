#include "Character.hpp"

using std::string;
using std::cout;
using std::endl;

Character::Character(void) : _inv_count(0)
{
	cout << BLU << "[CHARACTER CLASS CONSTRUCTED]" << RESET << endl;
}

Character::Character(string const &name) : _name(name), _inv_count(0)
{
	cout << BLU << "[CHARACTER CLASS CONSTRUCTED WITH PARAMETER]" << RESET << endl;
}

Character::Character(Character const &tocopy)
{
	cout << BLU << "[CHARACTER CLASS CONSTRUCTED BY COPY]" << RESET << endl;
	*this = tocopy;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		this->_inv[i] = tocopy._inv[i]->clone();
	}
}

Character	&Character::operator=(Character const &toassign)
{
	cout << BLU << "[CHARACTER CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	this->_name = toassign._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inv[i])
			delete this->_inv[i];
		this->_inv[i] = toassign._inv[i];
	}
	this->_inv_count = toassign._inv_count;
	// Do I need to assign Floor as well? It is already static
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_inv[i];
	cout << RED << "[CHARACTER CLASS DECONSTRUCTED]" << RESET << endl;
}

string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_inv_count < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inv[i]->getDroppedStatus() == YES)
			{
				this->_inv[_inv_count] = m;
				this->_inv_count += 1;
				cout << GRN << this->_name << ": equipped " << m->getType() << RESET << endl;
				break ;
			}
		}
	}
	else
		cout << RED << this->_name << ": Inventory full" << RESET << endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		cout << RED << this->_name << ": Inventory index must between 0-3" << RESET << endl;
		return ;
	}
	if (this->_inv[idx]->getDroppedStatus() == NO)
	{
		this->_inv[idx]->setDroppedStatus(YES);
		this->_floor.addItem(this->_inv[idx]);
		this->_inv_count -= 1;
	}
	else
		cout << RED << this->_name << ": Inventory at index " << idx << " is empty" << RESET << endl;
}

void	Character::use(int idx, ICharacter &target)
{
	this->_inv[idx]->use(target);
}