/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:38:20 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/01 17:38:48 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &copy);
		Cure &operator=(Cure const &rhs);
		virtual ~Cure();

		virtual AMateria	*clone() const;
		virtual void		use(ICharacter &target);
};

#endif
