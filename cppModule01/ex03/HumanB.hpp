#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon	&weaponB;

public:
	HumanB();
	~HumanB();

	void	attack();
};
#endif