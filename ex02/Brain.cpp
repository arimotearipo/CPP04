#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

//utility function
string	randomString(int size)
{
	const string	alphaNum = "abcdefghijklmnopqrstuvwxyz";
	string			randomStr = "";

	for (int i = 0; i < size; i++)
		randomStr += alphaNum[rand() % alphaNum.size()];
	return (randomStr);
}

Brain::Brain(void)
{
	cout << BLU << "[BRAIN CLASS CONSTRUCTED]" << RESET << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = randomString(7);
}

Brain::Brain(Brain const &tocopy)
{
	*this = tocopy;
}

Brain	&Brain::operator=(Brain const &toassign)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toassign._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	cout << RED << "[BRAIN CLASS DECONSTRUCTED]" << RESET << endl;
}

void	Brain::expressYourself(unsigned n)
{
	for (unsigned i = 0; i < n; i++)
	{
		cout << "idea[" << i << "]: " << this->_ideas[i] << " " << endl;
	}
}