#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int	_hitpoints;
	int	_energypoints;
	int	_attackdamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(const ClapTrap &copy);
	ClapTrap& operator=(const ClapTrap &clapTrap);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
};

#endif