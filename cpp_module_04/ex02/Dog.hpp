/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:01:43 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 21:01:42 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*brain;

	public:
		Dog();
		Dog(Dog const &copy);
		~Dog();

		Dog	&operator=(Dog const &copy);

		void	makeSound() const;
};

#endif
