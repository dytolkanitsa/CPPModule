#ifndef DIMONDTRAP_H
# define DIMONDTRAP_H

# include "ClpTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;
public:
	DiamondTrap(std::string name, int hitpoints, int energypoints, int attackdamage);
	~DiamondTrap();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	highFivesGuys(void);
	void	guardGate();
	void	whoAmI(void);
};

#endif