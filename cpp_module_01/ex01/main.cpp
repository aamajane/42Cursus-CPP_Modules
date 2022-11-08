/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:21:35 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/08 21:46:05 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N = 5;
	Zombie*	zombie = zombieHorde(N, "Zombie");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;
	return 0;
}
