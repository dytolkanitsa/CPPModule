#include "Scalar.hpp"

Scalar::Scalar() {
}

Scalar::~Scalar() {
}

Scalar::Scalar(char* str) : arg(str)
{
}

void	Scalar::convertToChar()
{
	std::cout << "char: ";
	if (arg.length() == 1 && !isdigit(arg[0]))
	{
		std::cout << "'" << arg << "'" << std::endl;
		return ;
	}
	int res;
	try
	{
		res = stoi(arg);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (res < 0 || res > 126)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	else if (res < 32 || res > 127)
	{
		std::cout << "Non displayable" << std::endl;
		return ;
	}
	else
	{
		std::cout << "'" << static_cast<char>(res) << "'" << std::endl;
	}
}

void	Scalar::convertToInt()
{
	std::cout << "int: ";
	if (arg.length() == 1 && !isdigit(arg[0])) // или !
	{
		std::cout << static_cast<int>(arg[0]) << std::endl;
		return ;
	}
	int res;
	try
	{
		res = stoi(arg);
		std::cout << res << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void	Scalar::convertToFloat()
{
	std::cout << "float: ";
	if (arg.length() == 1 && !isdigit(arg[0])) // или !
	{
		std::cout << static_cast<float>(arg[0]) << std::endl;
		return ;
	}
	float res = 0;
	try
	{
		res = stof(arg);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (static_cast<float>(res) == res)
	{
		std::cout << std::fixed << std::setprecision(1) << res;
	}
	else
	{
		std::cout << res;
	}
	std::cout << "f" << std::endl;
}

void	Scalar::convertToDouble()
{
	std::cout << "double: ";
	if (arg.length() == 1 && !isdigit(arg[0])) // или !
	{
		std::cout << static_cast<double>(arg[0]) << std::endl;
		return ;
	}
	double res = 0;
	try
	{
		res = stod(arg);
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	if (static_cast<double>(res) == res)
	{
		std::cout << std::fixed << std::setprecision(1) << res << std::endl;
	}
	else
	{
		std::cout << res << std::endl;
	}
}