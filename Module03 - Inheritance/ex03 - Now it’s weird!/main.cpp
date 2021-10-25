#include "ClpTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamondTrap("Anton");
	diamondTrap.attack("Kirill");
	diamondTrap.beRepaired(50);
	diamondTrap.takeDamage(15);
	diamondTrap.whoAmI();
}
