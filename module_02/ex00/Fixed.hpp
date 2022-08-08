#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
	private:
	int	value;
	static int bits;
	public:
	Fixed();
	Fixed(const Fixed &h);
	Fixed& operator=(const Fixed &h);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif