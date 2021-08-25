#include "ClpTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap clapTrap("Arseniy");
	ScavTrap scavTrap("Vitalik");
	FragTrap fragTrap("TheThirdOne");
	DiamondTrap diamondTrap("ThisOne");

	clapTrap.attack("Gena");
	scavTrap.attack("Zhora");
	fragTrap.attack("TheFourthOne");
	diamondTrap.attack("ThatOne");

	clapTrap.takeDamage(2);
	scavTrap.takeDamage(20);
	fragTrap.takeDamage(30);
	diamondTrap.takeDamage(50);
	clapTrap.beRepaired(3);
	scavTrap.beRepaired(10);
	fragTrap.beRepaired(100);
	diamondTrap.beRepaired(300);

	fragTrap.highFivesGuys();
	scavTrap.guardGate();
	diamondTrap.whoAmI();
}
