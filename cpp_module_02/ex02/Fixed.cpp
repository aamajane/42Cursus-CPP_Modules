/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:01 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/12 20:57:24 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;
	_value = value << _fractionalBits;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(value * (1 << _fractionalBits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignation operator called" << std::endl;
	_value = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (_value >> _fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return (out);
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
	++_value;
	return *this;
}

Fixed	&Fixed::operator--()
{
	_value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	--_value;
	return *this;
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
