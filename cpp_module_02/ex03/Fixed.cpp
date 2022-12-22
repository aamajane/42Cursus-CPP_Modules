/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:01 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/22 16:32:51 by aamajane         ###   ########.fr       */
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

Fixed::Fixed(int const value) : _value(value << _fractionalBits)
{
}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << _fractionalBits)))
{
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_value = rhs._value;
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int	Fixed::toInt(void) const
{
	return this->_value >> _fractionalBits;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << _fractionalBits);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	return this->_value > rhs._value;
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	return this->_value < rhs._value;
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	return this->_value >= rhs._value;
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	return this->_value <= rhs._value;
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	return this->_value == rhs._value;
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	return this->_value != rhs._value;
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed	&Fixed::operator++()
{
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_value++;
	return tmp;
}

Fixed	&Fixed::operator--()
{
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_value--;
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

std::ostream	&operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}
