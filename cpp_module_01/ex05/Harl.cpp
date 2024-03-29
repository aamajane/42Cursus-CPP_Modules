/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:39 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/10 20:52:56 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "Debug comment" << std::endl;
}

void	Harl::info()
{
	std::cout << "Info comment" << std::endl;
}

void	Harl::warning()
{
	std::cout << "Warning comment" << std::endl;
}

void	Harl::error()
{
	std::cout << "Error comment" << std::endl;
}

void	Harl::complain(std::string level)
{
	void		(Harl::*harlPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			return (this->*harlPtr[i])();
	}
	std::cout << "Error: Unknown level" << std::endl;
}
