#include "Scalar.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
	}
	else
	{
		Scalar scalar(argv[1]);
		scalar.convertToChar();
		scalar.convertToInt();
		scalar.convertToFloat();
		scalar.convertToDouble();
	}
}