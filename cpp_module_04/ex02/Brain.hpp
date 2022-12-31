/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 16:18:47 by aamajane          #+#    #+#             */
/*   Updated: 2022/12/31 16:19:54 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(Brain const &copy);
		~Brain();

		Brain	&operator=(Brain const &copy);

		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string idea);
};

#endif
