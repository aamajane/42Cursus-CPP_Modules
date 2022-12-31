/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:02:55 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 21:02:14 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	AAnimal	*animals[4];

	for(int i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
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
