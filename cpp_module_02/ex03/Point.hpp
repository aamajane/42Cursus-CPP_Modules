/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:29:48 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/15 19:58:00 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed	x;
		Fixed	y;

	public:
		Point();
		Point(Point const &copy);
		Point(float const x, float const y);
		~Point();

		Point	&operator=(Point const &rhs);

		Fixed	getx() const;
		Fixed	gety() const;

		bool	operator==(Point const &rhs) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
