#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class	Zombie
{
private:
	std::string zombieName;

public:

	Zombie(void); // конструктор
	~Zombie(void); // деструктор

	Zombie(std::string name);
	Zombie* newZombie(std::string name);
	void	randomChump(std::string name);
	void	announce(void);
	std::string	getZombieName(void);
	
};

#endif