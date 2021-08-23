#include "Karen.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid amount of parametrs" << std::endl;
		return 1;
	}
	else
	{
		Karen karen;
		karen.complain(argv[1]);
	}
}