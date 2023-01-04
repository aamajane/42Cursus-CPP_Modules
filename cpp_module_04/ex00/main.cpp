/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:02:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/04 20:44:07 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	std::cout << std::endl << "============ TEST1 ============" << std::endl;

	Animal const	*animal = new Animal();
	Animal const	*dog = new Dog();
	Animal const	*cat = new Cat();

	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();

	delete animal;
	delete dog;
	delete cat;

	std::cout << std::endl << "============ TEST2 ============" << std::endl;

	WrongAnimal const	*wrongAnimal = new WrongAnimal();
	WrongAnimal const	*wrongCat = new WrongCat();

	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
