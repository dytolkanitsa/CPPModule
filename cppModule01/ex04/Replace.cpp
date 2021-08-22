#include "Replace.hpp"

Replace::Replace(char* OldFilename, char* s1, char* s2)
{
	std::string newFilename(OldFilename);

	this->_OldFilename = OldFilename;
	this->_NewFilename = newFilename+ ".replace";
	this->_SearchString = s1;
	this->_ReplaceString = s2;
}