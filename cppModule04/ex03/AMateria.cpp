#include "AMatria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria& AMateria::operator=(const AMateria &materia)
{
	if (this == &materia)
		return *this;
	type = materia.getType();
}

std::string const & AMateria::getType() const
{
	return this->type;
}

AMateria::~AMateria()
{
}