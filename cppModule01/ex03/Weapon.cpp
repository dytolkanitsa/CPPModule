# include "Weapon.hpp"

Weapon::Weapon()
{
}

void	Weapon::setType(std::string weapon)
{
	weaponType = weapon;
}

// Weapon::Weapon(std::string weapon) : weaponType(weapon)
// {
// 	return ; 
// }

std::string const	&Weapon::getType()
{
	return weaponType;
}

Weapon::~Weapon()
{
}