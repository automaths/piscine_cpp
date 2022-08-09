#include "Fixed.hpp"

int Fixed::bits = 8;

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &h): value(h.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n): value(n)
{
	this->value = (float)this->value;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f): value_f(f)
{
	this->value = (int)this->value_f;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &h)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &h)
	{
		this->value = h.value;
		this->value_f = h.value_f;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

int Fixed::toInt(void) const
{
	return((int)this->value_f);
}

float Fixed::toFloat(void) const
{
	return ((float)this->value);
}
