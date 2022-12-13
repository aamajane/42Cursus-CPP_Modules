/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:01 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/13 18:08:56 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::Fixed(Fixed const &copy)
{
	*this = copy;
}

Fixed::Fixed(int const value)
{
	_value = value << _fractionalBits;
}

Fixed::Fixed(float const value)
{
	_value = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	_value = copy.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return _value;
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)_value / (1 << _fractionalBits);
}

int	Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}

bool	Fixed::operator>(Fixed const &copy) const
{
	return _value > copy.getRawBits();
}

bool	Fixed::operator<(Fixed const &copy) const
{
	return _value < copy.getRawBits();
}

bool	Fixed::operator>=(Fixed const &copy) const
{
	return _value >= copy.getRawBits();
}

bool	Fixed::operator<=(Fixed const &copy) const
{
	return _value <= copy.getRawBits();
}

bool	Fixed::operator==(Fixed const &copy) const
{
	return _value == copy.getRawBits();
}

bool	Fixed::operator!=(Fixed const &copy) const
{
	return _value != copy.getRawBits();
}

Fixed	Fixed::operator+(Fixed const &copy) const
{
	return Fixed(toFloat() + copy.toFloat());
}

Fixed	Fixed::operator-(Fixed const &copy) const
{
	return Fixed(toFloat() - copy.toFloat());
}

Fixed	Fixed::operator*(Fixed const &copy) const
{
	return Fixed(toFloat() * copy.toFloat());
}

Fixed	Fixed::operator/(Fixed const &copy) const
{
	return Fixed(toFloat() / copy.toFloat());
}

Fixed	&Fixed::operator++()
{
	_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	&Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return a < b ? a : b;
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return a > b ? a : b;
}
