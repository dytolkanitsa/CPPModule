# include "Weapon.hpp"

void	Weapon::setType(std::string weapon) {
	weaponType = weapon;
}

Weapon::Weapon(std::string weapon) : weaponType(weapon) {
}

std::string const	&Weapon::getType() {
	return weaponType;
}

Weapon::~Weapon() {
}