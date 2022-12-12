/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 21:29:48 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/12 21:42:48 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		Point(Point const &copy);
		Point(float const x, float const y);
		~Point();

		Point	&operator=(Point const &copy);

		Fixed	getx() const;
		Fixed	gety() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
