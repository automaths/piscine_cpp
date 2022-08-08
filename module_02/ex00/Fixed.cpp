#include "Fixed.hpp"

int Fixed::bits = 8;

Fixed::Fixed(): value(0)
{
	std::cout << "Default constructor called" << std::endl;
	// this->bits = 8;
}

Fixed::Fixed(const Fixed &h): value(h.value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &h)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &h)
	{
		this->value = h.value;
	}
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
