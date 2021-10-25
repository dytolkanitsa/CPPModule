#include "Zombie.hpp"

Zombie::Zombie() {
}

void	Zombie::announce(void) {
	std::cout << "Zombie " << this->zombieName << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name) {
	zombieName = name;
	announce();
}

std::string	Zombie::getZombieName(void) {
	return zombieName;
}

void	Zombie::setName(std::string name) {
	zombieName = name;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << getZombieName() << ": destroyed" << std::endl;
}
