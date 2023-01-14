/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:52 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 19:45:42 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int	main()
{
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);

	try
	{
		std::cout << easyFind(v, 3) << std::endl;
		std::cout << easyFind(v, 8) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
