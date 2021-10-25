#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string weaponType;

public:
	Weapon(std::string weapon);
	~Weapon();
	std::string const	&getType(void);
	void	setType(std::string weapon);
};
#endif