/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:58:59 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 18:10:12 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}
