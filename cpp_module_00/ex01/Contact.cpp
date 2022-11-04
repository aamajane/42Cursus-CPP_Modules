/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:19:42 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/04 23:46:33 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	_preData[0] = "First name: ";
	_preData[1] = "Last name: ";
	_preData[2] = "Nickname: ";
	_preData[3] = "Phone number: ";
	_preData[4] = "Darkest secret: ";
}

void	Contact::addContact(void)
{
	for (int i = 0; i < 5; i++)
	{
		_data[i].clear();
		while (_data[i].empty())
		{
			std::cout << _preData[i];
			std::getline(std::cin, _data[i]);
			if (std::cin.eof())
				exit(0);
		}
	}
}

void	Contact::printContact(void)
{
	for (int i = 0; i < 3; i++)
	{
		if (_data[i].length() > 10)
			std::cout << _data[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << _data[i];
		if (i < 2)
			std::cout << "|";
	}
	std::cout << std::endl;
}

void	Contact::printAll(void)
{
	for (int i = 0; i < 5; i++)
		std::cout << _preData[i] << _data[i] << std::endl;
}
