/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:30:09 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/13 18:03:53 by aamajane         ###   ########.fr       */
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

Point	&Point::operator=(Point const &copy)
{
	x = copy.getx();
	y = copy.gety();
	return *this;
}

Fixed	Point::getx() const
{
	return x;
}

Fixed	Point::gety() const
{
	return y;
}
