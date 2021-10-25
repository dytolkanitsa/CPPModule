#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Invalid amount of parametrs" << std::endl;
		return 1;
	}
	else
	{
		Replace replace (argv[1], argv[2], argv[3]);
		replace.replace();
	}
}