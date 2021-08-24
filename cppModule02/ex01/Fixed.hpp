#ifndef FIXED_H
# define FIXED_H

# include <string>
# include <iostream>
# include <cmath>

class Fixed
{
private:
	int	_fixpointValue;
	static const int	bit = 8;
public:
	Fixed();
	~Fixed();
	Fixed(int parametr);
	Fixed(float parametr);
	Fixed(const Fixed &copy); // конструктор копирования
	Fixed& operator=(const Fixed &fixed); // перегрузка оператора присваивания
	float	toFloat(void) const;
	int	toInt(void) const;
	int	getRawBits(void) const;
	void setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& out, const Fixed &fixed);
#endif