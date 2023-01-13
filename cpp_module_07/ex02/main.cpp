/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 01:31:05 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/13 02:37:36 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	printArray(Array<int> &a, std::string name)
{
	std::cout << name << " : ";
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
}

int	main()
{
	Array<int> a(5);

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i + rand() % 10;

	Array<int> b(a);

	printArray(a, "a");
	printArray(b, "b");
	std::cout << std::endl;

	for (unsigned int i = 0; i < b.size(); i++)
		b[i] = i;

	printArray(a, "a");
	printArray(b, "b");
	std::cout << std::endl;

	try
	{
		a[5] = 10;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b[-1] = 10;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	// system("leaks program");

	return 0;
}
