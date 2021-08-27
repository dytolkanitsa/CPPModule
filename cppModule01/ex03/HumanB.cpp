# include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

void	HumanB::attack(void) {
	if (!_weapon)
	{
		std::cout << _name << " attacks with his arms" << std::endl;
	}
	else
	{
		std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

HumanB::~HumanB() {
}