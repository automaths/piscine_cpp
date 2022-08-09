#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	private:
	int	value;
	float value_f;
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
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif