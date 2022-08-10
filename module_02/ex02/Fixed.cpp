#include "Fixed.hpp"

int Fixed::bits = 8;

Fixed::Fixed(): value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &h): value(h.value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	this->value = (n * (1<<8));
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	this->value = (int)roundf(f * (1<<8));
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &h)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &h)
		this->value = h.value;
	return (*this);
}

int Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->value = (raw * (1<<8));
}

int Fixed::toInt(void) const
{
	int bloup;
	bloup = this->value / (1<<8);
	return (bloup);
}

float Fixed::toFloat(void) const
{
	float bloup;
	bloup = (float)((float)this->value / (1<<8));
	return (bloup);
}

std::ostream &operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return out;
}
