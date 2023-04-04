/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:33 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/04 00:35:52 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		BitcoinExchange btc;
		try
		{
			btc.readDatabase();
			btc.readInputFile(av[1]);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
		
	}
	else
		std::cout << "Usage: ./btc [input_file]" << std::endl;
	return 0;
}
