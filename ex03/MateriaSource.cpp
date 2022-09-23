#include "MateriaSource.hpp"
#include "colours.h"
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;

MateriaSource::MateriaSource(void)
{
	for (unsigned i = 0;  i < this->_invSize; i++)
		this->_inventory[i] = NULL;
	cout << BLU "[MATERIASOURCE CLASS CONSTRUCTED]" RESET << endl;
}

MateriaSource::MateriaSource(MateriaSource const &tocopy)
{
	*this = tocopy;
	cout << BLU "[MATERIASOURCE CLASS CONSTRUCTED BY COPY]" RESET << endl;
}

MateriaSource::~MateriaSource(void)
{
	for (unsigned i = 0; i < this->_invSize; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	cout << RED "[MATERIASOURCE CLASS DECONSTRUCTED]" RESET << endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &toassign)
{
	if (this != &toassign)
	{
		for (unsigned i = 0; i < this->_invSize; i++)
		{
			if (this->_inventory[i] != NULL)
				delete this->_inventory[i];
			if (toassign._inventory[i] != NULL)
				this->_inventory[i] = toassign._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (unsigned i = 0; i < this->_invSize; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			_inventory[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria	*MateriaSource::createMateria(string const &type)
{
	for (unsigned i = 0; i < _invSize; i++)
	{
		if (_inventory[i] != NULL && _inventory[i]->getType() == type)
			return (_inventory[i]->clone());
	}
	return (NULL);
}