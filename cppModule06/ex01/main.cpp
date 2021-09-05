#include <iostream>
#include <string>

struct Data
{
	std::string first;
	std::string second;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main()
{
	Data *data = new Data;
	data->first = "hello";
	data->second = "world";
	Data *res = deserialize(serialize(data));
	std::cout << res->first << std::endl;
	std::cout << res->second << std::endl;
}