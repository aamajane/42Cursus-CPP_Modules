/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:18:49 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 16:29:40 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea " + std::to_string(i);
}

Brain::Brain(Brain const &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.getIdea(i);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(Brain const &copy)
{
	if (this != &copy)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = copy.ideas[i];
	return (*this);
}

std::string	Brain::getIdea(int i) const
{
	return this->ideas[i];
}

void	Brain::setIdea(int i, std::string idea)
{
	this->ideas[i] = idea;
}
