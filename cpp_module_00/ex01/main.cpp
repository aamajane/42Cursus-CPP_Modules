/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:22:04 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/30 20:59:10 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	while (1337)
	{
		std::string input;
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			std::cout << "ADD" << std::endl;
		else if (input == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (EXIT_SUCCESS);
}
