/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:53 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/12 22:18:06 by aamajane         ###   ########.fr       */
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
			PM.sortSequence();
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
