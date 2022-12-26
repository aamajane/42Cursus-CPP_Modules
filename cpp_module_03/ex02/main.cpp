/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/26 18:49:45 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap	one("One");
	one.highFivesGuys();
	one.attack("Enemy");
	one.takeDamage(50);
	one.beRepaired(30);
	one.takeDamage(100);
	one.highFivesGuys();
	one.attack("Enemy");
	one.beRepaired(100);
	one.takeDamage(50);
	return 0;
}
