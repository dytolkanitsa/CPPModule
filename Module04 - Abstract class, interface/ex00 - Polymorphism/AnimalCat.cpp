#include "AnimalCat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

void	Cat::makeSound() const
{
	std::cout << "Meow Meow Meow" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy construcor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat &cat)
{
	if (this == &cat)
		return *this;
	type = cat.getType();
	return *this;
}

std::string Cat::getType() const
{
	return type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}