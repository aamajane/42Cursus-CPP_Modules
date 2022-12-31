/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:02:55 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 18:15:39 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal	*animals[2];

	animals[0] = new Dog();
	animals[1] = new Cat();

	delete animals[0];
	delete animals[1];

	return 0;
}
