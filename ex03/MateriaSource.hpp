#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& m_src);
		MateriaSource& operator=(const MateriaSource& m_src);
		~MateriaSource();

		void           LearnMateria(AMateria* materia);
		AMateria*      CreateMateria(std::string const& type);

	private:
		AMateria	*_materias[4];
};

#endif