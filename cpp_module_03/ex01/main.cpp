/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/27 15:20:09 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	one("one");
	one.guardGate();
	one.attack("enemy");
	one.beRepaired(50);
	one.takeDamage(150);

	// ScavTrap	scav("one");
	// ClapTrap	*clap = &scav;
	// scav.attack("Enemy");
	// clap->attack("Enemy");
	return 0;
}
