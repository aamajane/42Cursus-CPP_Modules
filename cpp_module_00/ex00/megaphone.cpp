/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 22:06:28 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/08 22:57:55 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		std::string str;
		for (int i = 1; i < ac; i++)
		{
			str = av[i];
			for (int j = 0; str[j]; j++)
				std::cout << (char)toupper(str[j]);
		}
	}
	std::cout << std::endl;
	return 0;
}
