/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:38:22 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/02 15:35:22 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(Cure const &copy)
{
	*this = copy;
}

Cure &Cure::operator=(Cure const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cure::~Cure() {}

AMateria	*Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
