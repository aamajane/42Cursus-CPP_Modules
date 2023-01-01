/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 22:05:44 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 16:13:13 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string	type;
	
	public:
		AAnimal();
		AAnimal(AAnimal const &copy);
		virtual ~AAnimal();

		AAnimal	&operator=(AAnimal const &rhs);

		std::string		getType() const;
		virtual void	makeSound() const = 0;
};

#endif
