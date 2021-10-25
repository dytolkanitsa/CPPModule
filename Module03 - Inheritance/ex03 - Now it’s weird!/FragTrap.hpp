#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClpTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(int hitpoints, int energypoints, int attackdamage);
	~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap& operator=(const FragTrap &fragTrap);
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	highFivesGuys(void);
};

#endif