#ifndef FLOOR_HPP
#define FLOOR_HPP

#include "AMateria.hpp"

class Floor
{
	public:
		Floor(void);
		Floor(Floor const &tocopy);
		Floor &operator=(Floor const &toassign);
		~Floor(void);

		AMateria	*getItem(int i);
		void		addItem(AMateria *m);
		void		setCount(int i);
		int			getCount(void);
	private:
		AMateria	*_m[1024];
		int			_itemcount;
};

#endif