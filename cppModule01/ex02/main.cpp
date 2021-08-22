#include <iostream>
#include <string.h>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string	*stringPTR; // указатель указываюет на ячейку памяти (содержит адрес памяти)

	stringPTR = &str;
	std::string	&stringREF = str; // ссылки - указатель тоже, & - ссылка на //не могут быть нулевыми // нельзя переинциализировать
	// ссылки более надежные, так как не могут быть нулевыми и не могут быть изменены позже
	//  Указатели следует использовать только в тех ситуациях, когда ссылки являются недостаточно эффективными (при динамическом выделении памяти)
	std::cout << "The address in memory of the string: " << &str << std::endl;
	std::cout << "Adress using the pointer: " << stringPTR << std::endl; // адрес, который хранится в stringPTR
	std::cout << "Adress using the reference: " << &stringREF << std::endl;
}
