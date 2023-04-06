/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:33 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/06 23:21:45 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	BitcoinExchange	btc;

	if (ac == 2)
	{
		try
		{
			btc.readDatabase("data.csv");
			btc.processInputFile(av[1]);
		}
		catch(std::exception const &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
		std::cout << "Usage: ./btc [input_file]" << std::endl;

	return 0;
}
