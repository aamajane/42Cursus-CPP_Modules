/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/26 23:15:58 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap	one("One");
	one.guardGate();
	one.attack("Enemy");
	one.takeDamage(50);
	one.beRepaired(50);
	one.takeDamage(100);
	one.attack("Enemy");
	one.beRepaired(100);
	one.takeDamage(50);
	return 0;
}
