#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
	private:
	int	value;
	static int bits;
	public:
	Fixed();
	Fixed(const int n);
	Fixed(const float f);
	Fixed(const Fixed &h);
	Fixed& operator=(const Fixed &h);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	int toInt(void) const;
	float toFloat(void) const;
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	static Fixed& max(Fixed &one, Fixed &two);
	static Fixed& min(Fixed &one, Fixed &two);
	static const Fixed& max(Fixed const &one, Fixed const &two);
	static const Fixed& min(Fixed const &one, Fixed const &two);
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);
bool operator<(Fixed one, Fixed two);
bool operator>(Fixed one, Fixed two);
bool operator>=(Fixed one, Fixed two);
bool operator<=(Fixed one, Fixed two);
bool operator==(Fixed one, Fixed two);
bool operator!=(Fixed one, Fixed two);
float operator+(Fixed one, Fixed two);
float operator-(Fixed one, Fixed two);
float operator*(Fixed one, Fixed two);
float operator/(Fixed one, Fixed two);

#endif