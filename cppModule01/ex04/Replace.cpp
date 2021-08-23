#include "Replace.hpp"

Replace::Replace(char* OldFilename, char* s1, char* s2) {
	this->_OldFilename = OldFilename;
	this->_NewFilename = _OldFilename+ ".replace";
	this->_SearchString = s1;
	this->_ReplaceString = s2;
}

void	Replace::replace() {
	std::ifstream filein;

	filein.open(this->_OldFilename.c_str());
	if (!filein.is_open())
	{
		std::cout << "Could't open file" << std::endl;
	}
	else
	{
		getline(filein, this->fileText, '\0');
		filein.close();
	}

	size_t	found = 0;

	while (found != std::string::npos)
	{
		found = this->fileText.find(this->_SearchString, found + 1);
		if (found != std::string::npos)
		{
			this->fileText.erase(found, this->_SearchString.length()); // удаляет из вектора диапазон элементов начиная с found знакачивая длиной строки
			this->fileText.insert(found, this->_ReplaceString);
		}
	}

	std::ofstream fileout;

	fileout.open(this->_NewFilename.c_str());
	if (!fileout.is_open())
	{
		std::cout << "Could't open file" << std::endl;
	}
	else
	{
		fileout << this->fileText;
		fileout.close();
	}
}

Replace::~Replace() {
}