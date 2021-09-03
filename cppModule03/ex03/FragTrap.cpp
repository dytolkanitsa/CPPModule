#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
}

FragTrap::FragTrap(int hitpoints, int energypoints, int attackdamage)
{
	(void)energypoints;
	this->_hitpoints = hitpoints;
	this->_attackdamage = attackdamage;
	std::cout << "FragTrap consructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator=(const FragTrap &fragTrap)
{
	ClapTrap::operator=(fragTrap);
	return *this;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attack " << target
	<< ", causing " << _attackdamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " take " << amount
	<< " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int	amount)
{
	std::cout << "ClapTrap " << _name << " repaired " << amount
	<< " of hit points!" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " gives high five" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
