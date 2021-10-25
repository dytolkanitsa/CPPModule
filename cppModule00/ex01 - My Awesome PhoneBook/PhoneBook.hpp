#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <string>
# include <cstring> 

class Contact
{
public:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;
};

class PhoneBook
{
private:
	Contact array[8];
	std::string index;
	int	TableSize;
	int	TableIndex;

public:
	PhoneBook() : TableSize(0),	TableIndex(0) // инициализация членов класса
	{
	}
	void	CatOpen();
	void	commandAdd();
	int		commandSearch();
	void	makeHeader();
	void	printInform(Contact contact);
	void	printTable(Contact contact);
	void	PrintInfoFromTable(std::string str);
};
#endif