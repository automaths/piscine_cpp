#include "Fixed.hpp"

float operator+(Fixed one, Fixed two)
{
	return(one.toFloat() + two.toFloat());
}

float operator-(Fixed one, Fixed two)
{
	return(one.toFloat() - two.toFloat());
}

float operator*(Fixed one, Fixed two)
{
	return(one.toFloat() * two.toFloat());
}

float operator/(Fixed one, Fixed two)
{
	return(one.toFloat() / two.toFloat());
}
