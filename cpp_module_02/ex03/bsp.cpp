/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:29:49 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/13 18:11:35 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed const	triangleArea(Point const a, Point const b, Point const c)
{
	Fixed const	area = (a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2;
	return area > 0 ? area : area * -1;
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed const	area = triangleArea(a, b, c);
	Fixed const	area1 = triangleArea(point, a, b);
	Fixed const	area2 = triangleArea(point, a, c);
	Fixed const	area3 = triangleArea(point, b, c);
	return area == area1 + area2 + area3;
}
