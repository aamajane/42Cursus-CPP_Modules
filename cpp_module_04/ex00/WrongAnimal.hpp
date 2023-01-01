/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 23:26:46 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 16:11:31 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	type;
	
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &copy);
		~WrongAnimal();

		WrongAnimal	&operator=(WrongAnimal const &rhs);

		std::string		getType() const;
		void			makeSound() const;
};

#endif
