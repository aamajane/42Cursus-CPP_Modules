/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:00:00 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/07 23:59:52 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>

class PmergeMe
{
	private:

	public:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();
};

#endif
