#ifndef DIMONDTRAP_H
# define DIMONDTRAP_H

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
protected:
	std::string	name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap& operator=(const DiamondTrap &cdiamondTrap);
	using ScavTrap::attack;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	whoAmI(void);
};

#endif