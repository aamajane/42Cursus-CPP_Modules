/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/27 17:08:45 by aamajane         ###   ########.fr       */
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
	// frag.attack("Enemy");
	// clap->attack("Enemy");

	return 0;
}
