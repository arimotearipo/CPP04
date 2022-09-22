#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	protected:
		static const unsigned	_invSize = 4;
		AMateria				*_inventory[_invSize];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &tocopy);
		~MateriaSource(void);

		MateriaSource &operator=(MateriaSource const &toassign);

		void		learnMateria(AMateria* m);
		AMateria* 	createMateria(std::string const &type);
};

#endif