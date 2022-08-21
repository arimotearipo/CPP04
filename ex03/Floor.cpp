#include "Floor.hpp"

using std::cout;
using std::endl;

Floor::Floor(void) : _itemcount(0)
{
	cout << BLU << "[FLOOR CLASS CONSTRUCTED]" << RESET << endl;
}

Floor::Floor(Floor const &tocopy)
{
	for (int i = 0; i < 1024; i++)
		this->_m[i] = tocopy._m[i]->clone();
	this->_itemcount = tocopy._itemcount;
	cout << BLU << "[FLOOR CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Floor	&Floor::operator=(Floor const &toassign)
{
	*this = toassign;
	cout << BLU << "[FLOOR CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
}

Floor::~Floor(void)
{
	for (int i = 0; i < 1024; i++)
		delete this->_m[i];
	cout << RED << "[FLOOR CLASS DECONSTRUCTED]" << RESET << endl;
}

AMateria	*Floor::getItem(int i)
{
	if (i >= 0 && i <= 1024)
		return (this->_m[i]);
}

void	Floor::addItem(AMateria *m)
{
	this->_m[this->_itemcount] = m;
	this->setCount(this->getCount() + 1);
}

void	Floor::setCount(int	n)
{
	this->_itemcount = n;
}

int		Floor::getCount(void)
{
	return (this->_itemcount);
}