/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/27 17:11:28 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	one("one");

	std::cout << std::endl << one << std::endl;

	one.whoAmI();
	one.guardGate();
	one.highFivesGuys();
	one.attack("enemy");
	one.beRepaired(50);
	one.takeDamage(150);

	std::cout << std::endl << one << std::endl;

	return 0;
}
