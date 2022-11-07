/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 20:48:46 by aamajane          #+#    #+#             */
/*   Updated: 2022/11/07 21:30:53 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
};

#endif
