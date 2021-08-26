#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
}

ScavTrap::ScavTrap(std::string name, int hitpoints, int energypoints, int attackdamage) : 
	ClapTrap (name, hitpoints, energypoints, attackdamage)
{
	std::cout << "ScavTrap consructor called" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attack " << target
	<< ", causing " << _attackdamage << " points of damage!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &scavTrap)
{
	ClapTrap::operator=(scavTrap);
	return *this;
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