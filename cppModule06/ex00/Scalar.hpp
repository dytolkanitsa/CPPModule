#ifndef SCALAR_H
#define SCALAR_H

# include <iostream>
# include <string>
#include <iomanip>

class Scalar
{
private:
	const std::string	arg;

public:
	Scalar();
	Scalar(char* arg);
	~Scalar();
	void	convertToChar();
	void	convertToInt();
	void	convertToFloat();
	void	convertToDouble();
};

#endif