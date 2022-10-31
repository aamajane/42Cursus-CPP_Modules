/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:52 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 20:07:52 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "***** Welcome to the PhoneBook *****" << std::endl;
	this->_contactCount = 0;
	this->_contactIndex = 0;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "***** Thank you for using the PhoneBook *****" << std::endl;
}

void	PhoneBook::addContact(void)
{
	this->_contacts[this->_contactIndex].addContact();
	this->_contactIndex++;
	if (this->_contactIndex == 8)
		this->_contactIndex = 0;
	if (this->_contactCount < 8)
		this->_contactCount++;
}

void	PhoneBook::searchContact(void)
{
	if (this->_contactCount == 0)
	{
		std::cout << "PhoneBook is empty" << std::endl;
		return;
	}
	std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < this->_contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|";
		this->_contacts[i].printContact();
	}
	std::cout << "Enter the index of the contact you want to see: ";
	std::string input;
	std::getline(std::cin, input);
	if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
	{
		int index = input[0] - '0';
		if (index < this->_contactCount)
			this->_contacts[index].printAll();
		else
			std::cout << "Invalid index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
}
