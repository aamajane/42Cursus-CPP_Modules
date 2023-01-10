/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:00:49 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/10 20:47:30 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void 	andomChump(std::string name)
{
	Zombie zombie;
	zombie.setName(name);
	zombie.announce();
}
