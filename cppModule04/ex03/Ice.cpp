#include "Ice.hpp"

Ice::Ice() : AMateria ("ice")
{
	type = "ice";
}

Ice::~Ice()
{
}

Ice& Ice::operator=(const Ice &ice)
{
	if (this == &ice)
		return *this;
	this->type = ice.type;
	return *this;
}

Ice::Ice(const Ice &copy)
{
	*this = copy;
}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}