/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 01:31:05 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/13 18:42:13 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
void	printArray(T &a, std::string name)
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
		std::cout << a[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Index is out of range" << std::endl;
	}

	try
	{
		b[-1] = 10;
		std::cout << b[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Index is out of range" << std::endl;
	}

	// system("leaks program");

	return 0;
}
