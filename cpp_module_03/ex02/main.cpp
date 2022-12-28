/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/28 15:04:08 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	one("one");

	std::cout << std::endl << one << std::endl;

	one.highFivesGuys();
	one.attack("enemy");
	one.beRepaired(50);
	one.takeDamage(150);

	std::cout << std::endl << one << std::endl;

	// FragTrap	frag("one");
	// ClapTrap	*clap = &frag;
	// frag.attack("enemy");
	// clap->attack("enemy");

	return 0;
}
