/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:52 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 20:29:20 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int	main()
{
	std::cout << "===== TEST1 =====" << std::endl;
	std::vector<int>	v;

	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	try
	{
		std::cout << easyFind(v, 4) << std::endl;
		std::cout << easyFind(v, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "===== TEST2 =====" << std::endl;
	std::list<int>	l;

	for (int i = 5; i <= 10; i++)
		l.push_back(i);

	try
	{
		std::cout << easyFind(l, 6) << std::endl;
		std::cout << easyFind(l, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
