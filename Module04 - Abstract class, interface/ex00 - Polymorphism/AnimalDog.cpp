#include "AnimalDog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
}

void	Dog::makeSound() const
{
	std::cout << "Woof Woof Woof" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy construcor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog &dog)
{
	if (this == &dog)
		return *this;
	type = dog.getType();
	return *this;
}

std::string Dog::getType() const
{
	return type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}