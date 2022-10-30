/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:42 by aamajane          #+#    #+#             */
/*   Updated: 2022/10/30 23:11:07 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::addContact(void)
{
	std::cout << "First name: ";
	std::getline(std::cin, this->_firstName);
	std::cout << "Last name: ";
	std::getline(std::cin, this->_lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Phone number: ";
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, this->_darkestSecret);
}

void	Contact::printContact(void)
{
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
