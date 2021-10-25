#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc;)
		{
			for (int n = 0; n < (int)strlen(argv[i]);)
			{
				if (std::islower(argv[i][n]))
					argv[i][n] = std::toupper(argv[i][n]);
				n++;
			}
			std::cout << argv[i];
			i++;
		}
	}
	std::cout << std::endl;
	return 0;
}