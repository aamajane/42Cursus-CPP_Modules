/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 23:02:44 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 16:24:52 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string		type;
		unsigned int	xp;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &copy);
		AMateria &operator=(AMateria const &rhs);
		virtual ~AMateria();

		std::string const	&getType() const;
		unsigned int		getXP() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
