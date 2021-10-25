#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	type = "animal";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Making some animal sound" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy construcor called" << std::endl;
	type = copy.getType();
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &animal)
{
	if (this == &animal)
		return *this;
	type = animal.getType();
	return *this;
}

std::string WrongAnimal::getType() const
{
	return type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}