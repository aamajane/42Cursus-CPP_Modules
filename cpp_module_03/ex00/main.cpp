/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/25 20:40:43 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	one("One");
	one.attack("Enemy");
	one.takeDamage(5);
	one.beRepaired(3);

	ClapTrap	two("Two");
	two.attack("Enemy");
	two.takeDamage(10);
	two.attack("Enemy");
	two.beRepaired(10);
	two.takeDamage(5);
	return 0;
}
