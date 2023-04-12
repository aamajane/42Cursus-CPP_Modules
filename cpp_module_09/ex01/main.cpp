/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:44 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/12 22:51:40 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	main(int ac, char **av)
{
	RPN	rpn;

	if (ac == 2)
	{
		try
		{
			rpn.isExpressionValid(av[1]);
			rpn.calculateRPN();
		}
		catch (std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage: ./RPN \"expression\"" << std::endl;

	return 0;
}
