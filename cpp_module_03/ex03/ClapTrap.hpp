/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:36:28 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/26 23:17:48 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_healthPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		ClapTrap	&operator=(ClapTrap const &rhs);

		virtual void	attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
