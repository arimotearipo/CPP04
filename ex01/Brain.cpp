#include "Brain.hpp"

using std::cout;
using std::endl;
using std::string;

// utility function
static string	randomString(int size)
{
	const string	alphaNum = "abcdefghijklmnopqrstuvwxyz";
	string			randomStr = "";

	for (int i = 0; i < size; i++)
	{
		randomStr += alphaNum[rand() % alphaNum.size()];
	}
	return (randomStr);
}
// utility function ends

Brain::Brain(void)
{
	cout << RED << "[BRAIN CLASS CONSTRUCTED]" << RESET << endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = randomString(7);
}

Brain::Brain(Brain const &tocopy)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = tocopy._ideas[i];
	cout << RED << "[BRAIN CLASS CONSTRUCTED BY COPY]" << RESET << endl;
}

Brain	&Brain::operator=(Brain const &toassign)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = toassign._ideas[i];
	cout << RED << "[BRAIN CLASS CONSTRUCTED BY ASSIGNMENT]" << RESET << endl;
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
		cout << RED << "idea[" << i << "]: " << this->_ideas[i] << " " << RESET << endl;
	}
}