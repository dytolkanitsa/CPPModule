#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
}

void	WrongCat::makeSound() const
{
	std::cout << "Meow Meow Meow" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy construcor called" << std::endl;
	type = copy.getType();
}

WrongCat& WrongCat::operator=(const WrongCat &cat)
{
	if (this == &cat)
		return *this;
	type = cat.getType();
	return *this;
}

std::string WrongCat::getType() const
{
	return type;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}