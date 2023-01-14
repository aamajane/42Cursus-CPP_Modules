/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:52 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 19:47:24 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>	v;

	v.push_back(2);
	v.push_back(4);
	v.push_back(6);
	v.push_back(8);

	try
	{
		std::cout << easyFind(v, 4) << std::endl;
		std::cout << easyFind(v, 5) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
