#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria *materia[4];

public:
	MateriaSource();
	~MateriaSource();
	MateriaSource& operator=(const MateriaSource &material);
	MateriaSource(MateriaSource const &copy);
	void	learnMateria(AMateria* amaterials);
	AMateria* createMateria(std::string const &type);
};
# endif