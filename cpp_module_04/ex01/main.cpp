/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:02:55 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 18:55:46 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal	*animals[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2)
			animals[i] = new Dog(), std::cout << std::endl;
		else
			animals[i] = new Cat(), std::cout << std::endl;
	}

	for(int i = 0; i < 4; i++)
		animals[i]->makeSound(), std::cout << std::endl;

	for(int i = 0; i < 4; i++)
		delete animals[i], std::cout << std::endl;

	return 0;
}
