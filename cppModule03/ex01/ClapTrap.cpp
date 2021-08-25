#include "ClpTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap consructor called" << std::endl;
	_name = name;
	_hitpoints = 10;
	_energypoints = 10;
	_attackdamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target
	<< ", causing " << _attackdamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount
	<< " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int	amount)
{
	std::cout << "ClapTrap " << _name << " repaired " << amount
	<< " of hit points!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &clapTrap)
{
	_name = clapTrap._name;
	_hitpoints = clapTrap._hitpoints;
	_energypoints = clapTrap._energypoints;
	_attackdamage = clapTrap._attackdamage;
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}