/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/28 15:00:41 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	one("one");

	std::cout << std::endl << one << std::endl;

	one.guardGate();
	one.attack("enemy");
	one.beRepaired(50);
	one.takeDamage(150);

	std::cout << std::endl << one << std::endl;

	// ScavTrap	scav("one");
	// ClapTrap	*clap = &scav;
	// scav.attack("enemy");
	// clap->attack("enemy");

	return 0;
}
