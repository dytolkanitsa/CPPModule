#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name, int hitpoints, int energypoints, int attackdamage) : FragTrap()
{
	std::cout << "DiamondTrap consructor called" << std::endl;
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
}

void	DiamondTrap::attack(std::string const &target)
{
	std::cout << "DiamondTrap " << _name << " attack " << target
	<< ", causing " << _attackdamage << " points of damage!" << std::endl;
}

void	DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << _name << " take " << amount
	<< " points of damage!" << std::endl;
}

void	DiamondTrap::beRepaired(unsigned int	amount)
{
	std::cout << "DiamondTrap " << _name << " repaired " << amount
	<< " of hit points!" << std::endl;
}

void	DiamondTrap::whoAmI()
{

}

void	DiamondTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " gives high five" << std::endl;
}

void	DiamondTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}
