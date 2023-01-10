/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:21:35 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/10 20:48:59 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	N = atoi(av[1]);
		if (N > 0)
		{
			std::string	name = av[2];
			Zombie*		zombie = zombieHorde(N, name);
			for (int i = 0; i < N; i++)
				zombie[i].announce();
			delete[] zombie;
		}
		else
			std::cout << "Error: Wrong number of zombies" << std::endl;
	}
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
	return 0;
}
