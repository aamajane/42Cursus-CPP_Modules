/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/27 15:26:01 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	one("one");
	one.highFivesGuys();
	one.attack("enemy");
	one.beRepaired(50);
	one.takeDamage(150);

	// FragTrap	frag("one");
	// ClapTrap	*clap = &frag;
	// frag.attack("Enemy");
	// clap->attack("Enemy");

	return 0;
}
