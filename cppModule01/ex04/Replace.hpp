#ifndef REPLACE_H
# define REPLACE_H

# include <string>
# include <iostream>

class Replace
{
private:
	std::string	_SearchString;
	std::string _ReplaceString;
	std::string _OldFilename;
	std::string _NewFilename;

public:
	Replace(char* OldFilename, char* s1, char* s2);
	~Replace();

	void	replace(char* OldFilename, char* s1, char* s2);
};

#endif