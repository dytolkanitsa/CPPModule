#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClpTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(int hitpoints, int energypoints, int attackdamage);
	~ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &scavTrap);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	guardGate();
};

#endif