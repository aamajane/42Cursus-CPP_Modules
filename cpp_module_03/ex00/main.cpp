/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:30 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/26 21:54:37 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	one("One");
	one.attack("Enemy");
	one.takeDamage(5);
	one.beRepaired(5);
	one.attack("Enemy");
	one.takeDamage(10);
	one.attack("Enemy");
	one.beRepaired(10);
	one.takeDamage(5);
	return 0;
}
