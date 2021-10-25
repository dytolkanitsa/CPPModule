#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] != NULL)
			delete materia[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &material)
{
	if (this == &material)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		this->materia[i] = material.materia[i];
	}
	return *this;	
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	*this = copy;
}

void	MateriaSource::learnMateria(AMateria* amaterials)
{
	for (int i = 0; i < 4; i++)
	{
		if (materia[i] == NULL)
		{
			materia[i] = amaterials->clone();
			return ;
		}
	}
	delete amaterials;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	
	for (std::size_t i = 0; i < 4; i++) 
	{
		if (this->materia[i] && this->materia[i]->getType() == type) 
			return (this->materia[i]->clone());
	}
	std::cout << "This type ( " << type << ") hasn't been learned yet";
	return 0;
}