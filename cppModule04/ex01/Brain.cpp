#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain &brain)
{
	if (this == &brain)
		return *this;
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = brain.ideas[i];
	}
	return *this;
}

std::string *Brain::getIdeas()
{
	return this->ideas;
}

void	Brain::setIdeas(std::string *ideas)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}