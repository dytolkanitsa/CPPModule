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
	void	setRawBits(int const raw);

	// -
	Fixed	operator-(const Fixed &fixed);
	// +
	Fixed	operator+(const Fixed &fixed);
	// value++
	Fixed&	operator++(); //префикс
	// value--
	Fixed&	operator--(); //префикс
	// ++value
	Fixed	operator++(int); //постфикс
	// --value
	Fixed	operator--(int); //постфикс
	// *
	Fixed	operator*(const Fixed &fixed);
	// /
	Fixed	operator/(const Fixed &fixed);

	// >
	bool	operator>(const Fixed &fixed);
	// <
	bool	operator<(const Fixed &fixed);
	// >=
	bool	operator>=(const Fixed &fixed);
	// <=
	bool	operator<=(const Fixed &fixed);
	// ==
	bool	operator==(const Fixed &fixed);
	// !=
	bool	operator!=(const Fixed &fixed);

	//max
	static const Fixed& max(Fixed const &fixed1, Fixed const &fixed2);
	// min
	static const Fixed& min(Fixed const &fixed1, Fixed const &fixed2);
};

std::ostream& operator<<(std::ostream& out, const Fixed &fixed);
#endif