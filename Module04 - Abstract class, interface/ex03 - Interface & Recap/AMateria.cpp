#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria &materia)
{
	if (this == &materia)
		return *this;
	this->type = materia.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{
}