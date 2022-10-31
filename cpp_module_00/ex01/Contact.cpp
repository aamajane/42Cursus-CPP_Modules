/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:42 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 01:06:11 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_preData[0] = "First name: ";
	this->_preData[1] = "Last name: ";
	this->_preData[2] = "Nickname: ";
	this->_preData[3] = "Phone number: ";
	this->_preData[4] = "Darkest secret: ";
}

Contact::~Contact(void) {}

void	Contact::addContact(void)
{
	for (int i = 0; i < 5; i++)
	{
		while (this->_data[i].empty())
		{
			std::cout << this->_preData[i];
			std::getline(std::cin, this->_data[i]);
		}
	}
}

void	Contact::printContact(void)
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_data[i].length() > 10)
			std::cout << this->_data[i].substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->_data[i] << "|";
	}
	std::cout << std::endl;
}

void	Contact::printAll(void)
{
	for (int i = 0; i < 5; i++)
		std::cout << this->_preData[i] << this->_data[i] << std::endl;
}
