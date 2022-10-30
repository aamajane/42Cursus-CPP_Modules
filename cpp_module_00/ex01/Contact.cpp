/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:42 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/31 00:01:11 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

Contact::~Contact(void)
{
}

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
	
}

void	Contact::printAll(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
