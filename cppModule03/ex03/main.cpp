#include "ClpTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Arseniy");
	ScavTrap scavTrap("Vitalik");
	FragTrap fragTrap("Anton");
	DiamondTrap diamondTrap("Nikita");

	clapTrap.attack("Gena");
	scavTrap.attack("Zhora");
	fragTrap.attack("Kirill");
	diamondTrap.attack("Dima");

	clapTrap.beRepaired(12);
	scavTrap.beRepaired(15);
	fragTrap.beRepaired(30);
	diamondTrap.beRepaired(50);

	clapTrap.takeDamage(3);
	scavTrap.takeDamage(10);
	fragTrap.takeDamage(30);
	diamondTrap.takeDamage(15);

	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	diamondTrap.whoAmI();
}
