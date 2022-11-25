/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:39 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/25 14:03:37 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Debug comment" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Info comment" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Warning comment" << std::endl;
}

void Harl::error(void)
{
	std::cout << "Error comment" << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*harlPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (this->*harlPtr[i])();
	}
	std::cout << "Error: Wrong level" << std::endl;
}
