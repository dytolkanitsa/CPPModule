#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class	Zombie
{
private:
	std::string zombieName;

public:

	Zombie(void);
	~Zombie(void);

	Zombie(std::string name);
	void	announce(void);
	std::string	getZombieName(void);
	void	setName(std::string name);
	Zombie* zombieHorde(int N, std::string name);
};

#endif