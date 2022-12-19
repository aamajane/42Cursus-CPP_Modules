/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:06 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/19 20:51:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(int ac, char **av)
{
	if (ac == 9)
	{
		Point a(atof(av[1]), atof(av[2]));
		Point b(atof(av[3]), atof(av[4]));
		Point c(atof(av[5]), atof(av[6]));
		Point point(atof(av[7]), atof(av[8]));
		if (a == b || a == c || b == c)
		{
			std::cout << "Error: the points must be different" << std::endl;
			return 0;
		}
		std::cout << "A    : " << a.getX() << ", " << a.getY() << std::endl;
		std::cout << "B    : " << b.getX() << ", " << b.getY() << std::endl;
		std::cout << "C    : " << c.getX() << ", " << c.getY() << std::endl;
		std::cout << "Point: " << point.getX() << ", " << point.getY() << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "Point is inside the triangle" << std::endl;
		else
			std::cout << "Point is outside the triangle" << std::endl;
	}
	else
		std::cout << "Usage: ./bsp Ax Ay Bx By Cx Cy Px Py" << std::endl;
	return 0;
}
