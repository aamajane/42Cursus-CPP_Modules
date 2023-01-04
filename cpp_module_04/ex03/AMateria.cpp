/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:02:45 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/04 20:11:35 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : type(type) {}

AMateria::AMateria(AMateria const &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AMateria::~AMateria() {}

std::string const	&AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}
