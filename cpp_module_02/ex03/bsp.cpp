/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:29:49 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/21 18:23:52 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed const	triangleArea(Point const a, Point const b, Point const c)
{
	Fixed const	area = (a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2;
	return area > 0 ? area : area * -1;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	area = triangleArea(a, b, c);
	Fixed const	area1 = triangleArea(point, a, b);
	Fixed const	area2 = triangleArea(point, a, c);
	Fixed const	area3 = triangleArea(point, b, c);
	if (area == 0)
	{
		std::cout << "The points (A, B, C) are collinear" << std::endl;
		exit(0);
	}
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	return area == area1 + area2 + area3;
}
