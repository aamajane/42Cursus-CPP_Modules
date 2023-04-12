/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:53 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/12 21:26:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int ac, char **av)
{
	PmergeMe	PM;

	if (ac == 2)
	{
		try
		{
			PM.isSequenceValid(av[1]);

			std::cout << "Before: ";
			PM.printSequence();

			std::vector<int>	vec = PM.getVec();
			std::list<int>		lst = PM.getLst();

			PM.mergeInsertionSort(vec);
			PM.mergeInsertionSort(lst);

			std::cout << "After: ";
			PM.printSequence();
		}
		catch (std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage: ./PmergeMe \"Positive integer sequence\"" << std::endl;
	return 0;
}
