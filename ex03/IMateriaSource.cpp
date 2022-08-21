#include "IMateriaSource.hpp"

using std::cout;
using std::endl;

IMateriaSource::IMateriaSource(void)
{
	cout << BLU << "[IMATERIASOURCE CLASS CONSTRUCTED]" << RESET << endl;
}

IMateriaSource::IMateriaSource(IMateriaSource const &tocopy)
{
	(void)tocopy;
	cout << BLU << "[IMATERIASOURCE CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

IMateriaSource	&IMateriaSource::operator=(IMateriaSource const &toassign)
{
	(void)toassign;
	cout << BLU << "[IMATERIASOURCE CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

IMateriaSource::~IMateriaSource(void)
{
	cout << RED << "[IMATERIASOURCE CLASS DECONSTRUCTED]" << RESET << endl;
}