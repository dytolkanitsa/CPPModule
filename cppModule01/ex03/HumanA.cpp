# include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << name << "attcks with his" << this->weaponA.getType() << std::endl;
}

HumanA::~HumanA()
{
}
