/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/25 20:31:46 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	one("One");
	one.guardGate();
	one.attack("Enemy");
	one.takeDamage(50);
	one.beRepaired(30);
	one.takeDamage(100);
	one.guardGate();
	one.attack("Enemy");
	one.beRepaired(10);
	one.takeDamage(5);
	return 0;
}
