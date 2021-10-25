#include "PhoneBook.hpp"

void	PhoneBook::CatOpen()
{
	std::cout <<"|---------------------------------------|"<< std::endl;
	std::cout <<"|                       _ |\\_           |"<< std::endl;
	std::cout <<"|                       \\` ..\\          |"<< std::endl;
	std::cout <<"|                    ,.-\" =__Y=         |"<< std::endl;
	std::cout <<"|                  .\"        )          |"<< std::endl;
	std::cout <<"|               /   ,    \\/\\            |"<< std::endl;
	std::cout <<"|         ((____|    )_-\\ \\_-`          |"<< std::endl;
	std::cout <<"|         `-----\'`-----` `--`           |"<< std::endl;
	std::cout <<"|                                       |"<< std::endl;
	std::cout <<"|                                       |"<< std::endl;
	std::cout <<"|       Use one of this commands:       |"<< std::endl;
	std::cout <<"|                                       |"<< std::endl;
	std::cout <<"| ADD            SEARCH            EXIT |"<< std::endl;
	std::cout <<"|---------------------------------------|"<< std::endl;
}

void	PhoneBook::printTable(Contact contact)
{
	PrintInfoFromTable(contact.firstname);
	PrintInfoFromTable(contact.lastname);
	PrintInfoFromTable(contact.nickname);
	std::cout << std::endl;
}

void	PhoneBook::printInform(Contact contact)
{
	std::cout << "First name: " << contact.firstname << std::endl;
	std::cout << "Last name: " << contact.lastname << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phonenumber << std::endl;
	std::cout << "Darkest secret: " << contact.darkestsecret << std::endl;
}

void	PhoneBook::PrintInfoFromTable(std::string str)
{
	if (str.length() < 10 || str.length() == 10)
	{
		int	length = str.length();
		while (length < 10)
		{
			std::cout << " ";
			length++;
		}
		std::cout << str << "|";
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << "." << "|";
	}
}

void	PhoneBook::commandAdd()
{
	std::cout << "Please enter first name U｡･ｪ･｡U" << std::endl;
	getline(std::cin, array[TableIndex].firstname, '\n');
	std::cout << "Please enter last name U｡･ｪ･｡U" << std::endl;
	getline(std::cin, array[TableIndex].lastname, '\n');
	std::cout << "Please enter nickname U｡･ｪ･｡U" << std::endl;
	getline(std::cin, array[TableIndex].nickname, '\n');
	std::cout << "Please enter phone number U｡･ｪ･｡U" << std::endl;
	getline(std::cin, array[TableIndex].phonenumber, '\n');
	std::cout << "Please enter darkest secret U｡･ｪ･｡U" << std::endl;
	getline(std::cin, array[TableIndex].darkestsecret, '\n');
	if (TableIndex == 7)
		TableIndex = 0;
	else
		TableIndex++;
	if (TableSize < 8)
		TableSize++;
}

void	PhoneBook::makeHeader()
{
	std::cout << "_____________________________________________" << std::endl;
	std::cout << "|     index|" << " firstname|" << "  lastname|" << " nick name|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}

int	PhoneBook::commandSearch()
{
	int	int_ind;
	PhoneBook::makeHeader();
	for (int i = 0; i < TableSize; i++)
	{
		std::cout << "|" << "         " << i << "|";
		printTable(array[i]);
	}
	std::cout << "Which index do you prefer to see?" << std::endl;
	getline(std::cin, index, '\n');
	if (index.length() != 1)
		return (0);
	int_ind = atoi(index.c_str());
	if ((int_ind >= 0 && int_ind <= 9) && !(int_ind > TableSize - 1) && isdigit(int_ind + 48))
		printInform(array[int_ind]);
	else
		std::cout << "Invalid index! Choose between 0 and " << TableSize - 1 << std::endl;
	return (1);
}
