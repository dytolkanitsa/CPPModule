#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
}

DiamondTrap::DiamondTrap(std::string name) :
	ScavTrap (50, 50, 50),
	FragTrap (200, 200, 200)
{
	std::cout << "DiamondTrap consructor called" << std::endl;
	ClapTrap::_name = name;
	this->name = name + "_clap_name";
	// std::cout << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &diamondTrap)
{
	ClapTrap::operator=(diamondTrap);
	return *this;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << name << " take " << amount
	<< " points of damage!" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int	amount)
{
	std::cout << "DiamondTrap " << name << " repaired " << amount
	<< " of hit points!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name " << name << std::endl;
	std::cout << "I'm " << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
