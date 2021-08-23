#include "Karen.hpp"

Karen::Karen(){
}

void	Karen::debug(void) {
	std::cout << "I love to get extra bacon for my \
7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "I cannot believe adding extra \
bacon cost more money. You don’t put enough!\nIf you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been \
coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	void ((Karen::*functions[4]))(void);
	
	functions[0] = &Karen::debug;
	functions[1] = &Karen::info;
	functions[2] = &Karen::warning;
	functions[3] = &Karen::error;
	
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; i++)
	{
		if (level.compare(levels[i]) == 0)
			break ;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*functions[i++])();
			std::cout << '\n' << std::endl;
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			(this->*functions[i++])();
			std::cout << '\n' << std::endl;
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*functions[i++])();
			std::cout << '\n' << std::endl;
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*functions[i++])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
