/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:45:16 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/04 20:24:19 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &copy)
{
	for (int i = 0; i < 4; i++)
		slot[i] = NULL;
	*this = copy;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	for (int i = 0; i < 4 && this->slot[i]; i++)
		delete this->slot[i];
	for (int i = 0; i < 4; i++)
		this->slot[i] = rhs.slot[i] ? rhs.slot[i]->clone() : NULL;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 && this->slot[i]; i++)
		delete this->slot[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->slot[i] == NULL)
		{
			this->slot[i] = m;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 && this->slot[i]; i++)
	{
		if (this->slot[i]->getType() == type)
			return this->slot[i]->clone();
	}
	return NULL;
}
