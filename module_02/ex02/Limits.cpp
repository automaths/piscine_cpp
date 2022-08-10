#include "Fixed.hpp"

Fixed const &Fixed::max(Fixed const &one, Fixed const &two)
{
	if (one.toFloat() > two.toFloat())
		return (one);
	return(two);
}
Fixed const &Fixed::min(Fixed const &one, Fixed const &two)
{
	if (one.toFloat() > two.toFloat())
		return (two);
	return(one);
}

Fixed& Fixed::max(Fixed &one, Fixed &two)
{
	if (one.toFloat() > two.toFloat())
		return (one);
	return(two);
}
Fixed& Fixed::min(Fixed &one, Fixed &two)
{
	if (one.toFloat() > two.toFloat())
		return (two);
	return(one);
}