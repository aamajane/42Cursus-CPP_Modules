/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 14:33:06 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/12 21:45:00 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(int ac, char **av)
{
	if (ac == 9)
	{
		Point a = Point(atof(av[1]), atof(av[2]));
		Point b = Point(atof(av[3]), atof(av[4]));
		Point c = Point(atof(av[5]), atof(av[6]));
		Point point = Point(atof(av[7]), atof(av[8]));
		std::cout << "A: " << a.getx() << ", " << a.gety() << std::endl;
		std::cout << "B: " << b.getx() << ", " << b.gety() << std::endl;
		std::cout << "C: " << c.getx() << ", " << c.gety() << std::endl;
		std::cout << "Point: " << point.getx() << ", " << point.gety() << std::endl;
		std::cout << "BSP: " << bsp(a, b, c, point) << std::endl;
	}
	else
		std::cout << "Usage: ./bsp x1 y1 x2 y2 x3 y3 x y" << std::endl;
	return 0;
}
