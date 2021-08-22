#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	zombieName = name;
	announce();
}

void	Zombie::announce(void)
{
	std::cout << "Zombie " << this->zombieName << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::returnName()
{
	return (zombieName);
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << returnName() << " destriyed" << std::endl;
}
