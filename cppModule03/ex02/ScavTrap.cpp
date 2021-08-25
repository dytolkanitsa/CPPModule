#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap (name)
{
	std::cout << "ScavTrap consructor called" << std::endl;
	_hitpoints = 100;
	_energypoints = 50;
	_attackdamage = 20;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attack " << target
	<< ", causing " << _attackdamage << " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << _name << " take " << amount
	<< " points of damage!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int	amount)
{
	std::cout << "ScavTrap " << _name << " repaired " << amount
	<< " of hit points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
