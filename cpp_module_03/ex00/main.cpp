/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/27 16:47:49 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	one("one");

	std::cout << std::endl << one << std::endl;

	one.attack("enemy");
	one.beRepaired(5);
	one.takeDamage(20);

	std::cout << std::endl << one << std::endl;

	one.attack("enemy");
	one.beRepaired(10);
	one.takeDamage(5);

	return 0;
}
