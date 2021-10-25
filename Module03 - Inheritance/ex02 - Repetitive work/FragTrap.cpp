#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
}

FragTrap::FragTrap(std::string name) : ClapTrap (name)
{
	std::cout << "FragTrap consructor called" << std::endl;
	_hitpoints = 100;
	_energypoints = 100;
	_attackdamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
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
	std::cout << "FragTrap " << _name << " attack " << target
	<< ", causing " << _attackdamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << _name << " take " << amount
	<< " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int	amount)
{
	std::cout << "FragTrap " << _name << " repaired " << amount
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
