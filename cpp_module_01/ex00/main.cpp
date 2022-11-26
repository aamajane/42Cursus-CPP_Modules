/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:21:35 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/26 16:41:33 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
	if (ac == 3)
	{
		std::cout << "********** Stack **********" << std::endl;
		randomChump(av[1]);
		std::cout << "********** Heap **********" << std::endl;
		Zombie* zombie = newZombie(av[2]);
		zombie->announce();
		delete zombie;
	}
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
	return 0;
}
