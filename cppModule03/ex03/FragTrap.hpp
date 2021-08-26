#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClpTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name, int hitpoints = 100, int energypoints = 100, int attackdamage = 30);
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &fragTrap);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	highFivesGuys(void);
};

#endif