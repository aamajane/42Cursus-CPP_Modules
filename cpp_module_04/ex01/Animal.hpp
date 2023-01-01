/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:05:44 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 16:12:09 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(Animal const &copy);
		virtual ~Animal();

		Animal	&operator=(Animal const &rhs);

		std::string		getType() const;
		virtual void	makeSound() const;
};

#endif
