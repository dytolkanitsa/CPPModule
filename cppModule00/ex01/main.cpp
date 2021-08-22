#include "PhoneBook.hpp"

int	main()
{
	PhoneBook PhoneBook;
	std::string command;

	PhoneBook.CatOpen();
	while (1)
	{
		std::cout << "Use one of this commands: add/search/exit ฅ(•ㅅ•❀)ฅ" << std::endl;
		getline(std::cin, command, '\n');
		if (command == "add")
			PhoneBook.commandAdd();
		else if (command == "search")
		{
			if (PhoneBook.commandSearch() == 0)
				std::cout << "Invalid command! Use one of this commands: add/search/exit (=｀ェ´=)" << std::endl;
			else
				continue ;
		}
		else if (command == "exit")
			exit (0);
		else
			std::cout << "Invalid command! Use one of this commands: add/search/exit (=｀ェ´=)" << std::endl;
	}
}