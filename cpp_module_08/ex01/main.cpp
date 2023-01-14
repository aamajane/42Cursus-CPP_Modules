/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:17 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/15 00:12:07 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "===== TEST1 =====" << std::endl;
	Span	sp1 = Span(5);

	try
	{
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "===== TEST2 =====" << std::endl;
	Span				sp2 = Span(10000);
	std::vector<int>	vec;

	srand(time(NULL));
	for (int i = 0; i < 10000; i++)
		vec.push_back(rand());

	try
	{
		sp2.addMultiNumber(vec.begin(), vec.end());

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
