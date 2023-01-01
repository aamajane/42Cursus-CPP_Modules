/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:58:59 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 15:54:09 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(Cat const &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}
