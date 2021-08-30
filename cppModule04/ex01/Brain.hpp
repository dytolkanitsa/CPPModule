#ifndef BRAIN_H
#define BRAIN_H

# include <iostream>
# include <string>

class	Brain
{
protected:
	std::string	ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &copy);
	Brain& operator=(const Brain &brain);
	std::string *getIdeas();
	void	setIdeas(std::string *ideas);
};
#endif