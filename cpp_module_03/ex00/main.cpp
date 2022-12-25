/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/25 15:20:31 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	one("One");
	one.attack("Enemy_1");
	one.takeDamage(5);
	one.beRepaired(3);
	one.takeDamage(10);
	one.attack("Enemy_2");
	one.beRepaired(10);
	one.takeDamage(5);
	return 0;
}
