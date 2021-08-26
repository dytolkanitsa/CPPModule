#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClpTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name, int hitpoints = 100, int energypoints = 50, int attackdamage = 20);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &scavTrap);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	guardGate();
};

#endif