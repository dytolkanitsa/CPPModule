#ifndef REPLACE_H
# define REPLACE_H

# include <string>
# include <iostream>
# include <fstream>

class Replace
{
private:
	std::string	_SearchString;
	std::string _ReplaceString;
	std::string _OldFilename;
	std::string _NewFilename;
	std::string	fileText;

public:
	Replace(char* OldFilename, char* s1, char* s2);
	~Replace();
	void	replace(void);
};

#endif