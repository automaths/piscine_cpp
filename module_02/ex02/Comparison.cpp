#include "Fixed.hpp"

bool operator<(Fixed one, Fixed two)
{
	if (one.toFloat() < two.toFloat())
		return 1;
	return 0;
}

bool operator>(Fixed one, Fixed two)
{
	if (one.toFloat() > two.toFloat())
		return 1;
	return 0;
}

bool operator>=(Fixed one, Fixed two)
{
	if (one.toFloat() >= two.toFloat())
		return 1;
	return 0;
}

bool operator<=(Fixed one, Fixed two)
{
	if (one.toFloat() <= two.toFloat())
		return 1;
	return 0;
}

bool operator==(Fixed one, Fixed two)
{
	if (one.toFloat() == two.toFloat())
		return 1;
	return 0;
}

bool operator!=(Fixed one, Fixed two)
{
	if (one.toFloat() != two.toFloat())
		return 1;
	return 0;
}

