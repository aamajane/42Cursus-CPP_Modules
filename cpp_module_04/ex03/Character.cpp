/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:47:59 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/04 19:34:34 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("default")
{
	for (int i = 0; i < 4; i++)
		this->slot[i] = NULL;
}

Character::Character(std::string const &name) : name(name)
{
	for (int i = 0; i < 4; i++)
		this->slot[i] = NULL;
}

Character::Character(Character const &copy)
{
	*this = copy;
}

Character &Character::operator=(Character const &rhs)
{
	this->name = rhs.name;
	for (int i = 0; i < 4 && this->slot[i]; i++)
		delete this->slot[i];
	for (int i = 0; i < 4; i++)
		this->slot[i] = rhs.slot[i]->clone();
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4 && this->slot[i]; i++)
		delete this->slot[i];
}

std::string const	&Character::getName() const
{
	return this->name;
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!this->slot[i])
		{
			this->slot[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	else
		this->slot[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Invalid index" << std::endl;
	else
		this->slot[idx]->use(target);
}
