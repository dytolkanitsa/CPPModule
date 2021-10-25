#include "Cure.hpp"

Cure::Cure() : AMateria ("cure")
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure &cure)
{
	if (this == &cure)
		return *this;
	this->type = cure.type;
	return *this;
}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *"<< std::endl;
}