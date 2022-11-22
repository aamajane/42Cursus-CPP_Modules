/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:12:03 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/22 17:59:10 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileClass.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		std::cerr << "Error: Wrong number of arguments" << std::endl;
	else
	{
		FileClass fileObject(av[1], av[2], av[3]);
	}
	return 0;
}
