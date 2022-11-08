/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:21:35 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/08 22:06:35 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	N = atoi(av[1]);
		if (N)
		{
			Zombie*	zombie = zombieHorde(N, av[2]);
			for (int i = 0; i < N; i++)
				zombie[i].announce();
			delete[] zombie;
		}
	}
	return 0;
}
