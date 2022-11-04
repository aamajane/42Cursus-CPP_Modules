/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:52 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/04 23:46:35 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "***** Welcome to the PhoneBook *****" << std::endl;
	_contactCount = 0;
	_contactIndex = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "***** Thank you for using the PhoneBook *****" << std::endl;
}

void	PhoneBook::addContact(void)
{
	_contacts[_contactIndex++].addContact();
	if (_contactIndex == 8)
		_contactIndex = 0;
	if (_contactCount < 8)
		_contactCount++;
}

void	PhoneBook::searchContact(void)
{
	if (_contactCount == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}	
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|";
		_contacts[i].printContact();
	}
	bool validIndex = false;
	while (!validIndex)
	{
		std::string input;
		while (input.empty())
		{
			std::cout << "Enter the index of the contact you want to see: ";
			std::getline(std::cin, input);
			if (std::cin.eof())
				exit(0);
		}
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
		{
			int index = input[0] - '0';
			if (index < _contactCount)
			{
				validIndex = true;
				_contacts[index].printAll();
			}
			else
				std::cout << "Invalid index" << std::endl;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
}
