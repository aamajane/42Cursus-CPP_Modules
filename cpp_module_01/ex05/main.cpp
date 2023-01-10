/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 13:36:43 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/10 20:53:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Error: Wrong number of arguments" << std::endl;
	return 0;
}
