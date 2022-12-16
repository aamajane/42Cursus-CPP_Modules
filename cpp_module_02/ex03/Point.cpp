/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:30:09 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/16 15:26:16 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(Point const &copy)
{
	*this = copy;
}

Point::Point(float const x, float const y) : x(x), y(y)
{
}

Point::~Point()
{
}

Point	&Point::operator=(Point const &rhs)
{
	x = rhs.getX();
	y = rhs.getY();
	return *this;
}

Fixed	Point::getX() const
{
	return x;
}

Fixed	Point::getY() const
{
	return y;
}

bool	Point::operator==(Point const &rhs) const
{
	return x == rhs.getX() && y == rhs.getY();
}
