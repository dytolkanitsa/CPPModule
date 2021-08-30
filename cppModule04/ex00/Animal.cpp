#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	type = "animal";
}

void	Animal::makeSound() const
{
	std::cout << "Making some animal sound" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy construcor called" << std::endl;
	type = copy.getType();
}

Animal& Animal::operator=(const Animal &animal)
{
	if (this == &animal)
		return *this;
	type = animal.getType();
	return *this;
}

std::string Animal::getType() const
{
	return type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}