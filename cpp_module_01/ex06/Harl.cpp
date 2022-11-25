/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:39 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/25 13:36:23 by aamajane         ###   ########.fr       */
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
}
