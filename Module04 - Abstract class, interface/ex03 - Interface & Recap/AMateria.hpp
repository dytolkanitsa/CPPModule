#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
#include "ICharacter.hpp"

class	ICharacter;

class AMateria
{
protected:
	std::string	type;
public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria &copy);
	virtual ~AMateria();
	AMateria& operator=(const AMateria &materia);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif