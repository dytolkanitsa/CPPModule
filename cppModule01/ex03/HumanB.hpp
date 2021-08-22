#ifndef HUMAN_B_H
# define HUMAN_B_H

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon* _weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &weaponB);
};
#endif