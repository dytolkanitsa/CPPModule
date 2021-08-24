#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>

class Fixed
{
private:
	int	_fixpointValue;
	static const int	bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy); // конструктор копирования
	Fixed& operator=(const Fixed &fixed); // перегрузка оператора присваивания
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif