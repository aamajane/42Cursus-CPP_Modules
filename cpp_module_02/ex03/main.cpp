/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:06 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/13 18:06:42 by aamajane         ###   ########.fr       */
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
		std::cout << "A    : " << a.getx() << ", " << a.gety() << std::endl;
		std::cout << "B    : " << b.getx() << ", " << b.gety() << std::endl;
		std::cout << "C    : " << c.getx() << ", " << c.gety() << std::endl;
		std::cout << "Point: " << point.getx() << ", " << point.gety() << std::endl;
		if (bsp(a, b, c, point))
			std::cout << "Point is inside the triangle" << std::endl;
		else
			std::cout << "Point is outside the triangle" << std::endl;
	}
	else
		std::cout << "Usage: ./bsp Ax Ay Bx By Cx Cy Px Py" << std::endl;
	return 0;
}
