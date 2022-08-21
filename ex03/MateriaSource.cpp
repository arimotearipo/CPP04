#include "MateriaSource.hpp"

using std::cout;
using std::endl;

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		this->_materias[i] = NULL;
	}
	cout << BLU << "[MATERIASOURCE CLASS CONSTRUCTED]" << RESET << endl;
}

MateriaSource::MateriaSource(MateriaSource const &tocopy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		this->_materias[i] = tocopy._materias[i]->clone();
	}
		cout << BLU << "[MATERIASOURCE CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &toassign)
{
	*this = toassign;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		this->_materias[i] = toassign._materias[i];
	}
	cout << BLU << "[MATERIASOURCE CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		this->_materias[i] = NULL;
	}
	cout << RED << "[MATERIASOURCE CLASS DECONSTRUCTED]" << RESET << endl;
}

void	MateriaSource::LearnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
			this->_materias[i] = materia;
		break;
	}
}

AMateria	*MateriaSource::CreateMateria(string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	cout << RED << "No Materia of that type found" << RESET << endl;
	return (NULL);
}