#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include "ClpTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
public:
	FragTrap(std::string name);
	~FragTrap();
	void	attack(std::string const &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int	amount);
	void	highFivesGuys(void);
};

#endif