/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:22:04 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 20:12:09 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook phoneBook;

	while (true)
	{
		std::string input;
		while (input.empty())
		{
			std::cout << "Enter a command: ";
			std::getline(std::cin, input);
		}
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
			phoneBook.searchContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (EXIT_SUCCESS);
}
