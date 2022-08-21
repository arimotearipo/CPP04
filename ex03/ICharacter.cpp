#include "ICharacter.hpp"

using std::cout;
using std::endl;

ICharacter::ICharacter(void)
{
	cout << BLU << "[ICHARACTER CLASS CONSTRUCTED]" << RESET << endl;
}

ICharacter::ICharacter(const ICharacter& c)
{
	(void)c;
	cout << BLU << "[ICHARACTER CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

ICharacter& ICharacter::operator=(const ICharacter& c)
{
	(void)c;
	cout << BLU << "[ICHARACTER CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
	return (*this);
}

ICharacter::~ICharacter(void)
{
	cout << RED << "[ICHARACTER CLASS DECONSTRUCTED]" << RESET << endl;
}