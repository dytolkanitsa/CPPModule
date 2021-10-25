#include <iostream>
#include <string.h>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR;

	stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str reference: " << stringREF << std::endl;
	std::cout << "str pointer: " << 	*stringPTR << std::endl;

	std::cout << "The address in memory of the string: " << &str << std::endl;
	std::cout << "Adress using the pointer: " << stringPTR << std::endl;
	std::cout << "Adress using the reference: " << &stringREF << std::endl;
}
