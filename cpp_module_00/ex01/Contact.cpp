/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:42 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 00:49:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void	Contact::addContact(void)
{
	while (this->_firstName.empty())
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->_firstName);
	}
	while (this->_lastName.empty())
	{
		std::cout << "Last name: ";
		std::getline(std::cin, this->_lastName);
	}
	while (this->_nickname.empty())
	{
		std::cout << "Nickname: ";
		std::getline(std::cin, this->_nickname);
	}
	while (this->_phoneNumber.empty())
	{
		std::cout << "Phone number: ";
		std::getline(std::cin, this->_phoneNumber);
	}
	while (this->_darkestSecret.empty())
	{
		std::cout << "Darkest secret: ";
		std::getline(std::cin, this->_darkestSecret);
	}
}

void	Contact::printContact(void)
{
	if (this->_firstName.length() > 10)
		std::cout << this->_firstName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->_firstName << "|";
	if (this->_lastName.length() > 10)
		std::cout << this->_lastName.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->_lastName << "|";
	if (this->_nickname.length() > 10)
		std::cout << this->_nickname.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->_nickname << "|";
	std::cout << std::endl;
}

void	Contact::printAll(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
