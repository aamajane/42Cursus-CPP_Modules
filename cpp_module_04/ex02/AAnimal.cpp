/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:05:47 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 21:01:21 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &copy)
{
	if (this != &copy)
		this->type = copy.type;
	return *this;
}

std::string	AAnimal::getType() const
{
	return this->type;
}

void	AAnimal::makeSound() const
{
	std::cout << "AAnimal sound" << std::endl;
}
