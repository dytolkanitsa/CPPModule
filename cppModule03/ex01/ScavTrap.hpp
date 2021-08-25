#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include "ClpTrap.hpp"

class	ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	guardGate();
};

#endif