/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:46:52 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 20:24:50 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
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

	return 0;
}
