/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:43:09 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 17:43:54 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(Ice const &copy)
{
	*this = copy;
}

Ice &Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Ice::~Ice() {}

AMateria	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
