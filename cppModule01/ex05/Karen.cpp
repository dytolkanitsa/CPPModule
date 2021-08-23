#include "Karen.hpp"

Karen::Karen(){
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra \
bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been \
coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level)
{
	void ((Karen::*functions[4]))(void);
	
	functions[0] = &Karen::debug;
	functions[1] = &Karen::info;
	functions[2] = &Karen::warning;
	functions[3] = &Karen::error;
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "Try another command!" << std::endl;
}