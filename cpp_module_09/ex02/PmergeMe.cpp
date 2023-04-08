/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:57 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/08 00:00:49 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &copy)
{
	*this = copy;
}

PmergeMe &PmergeMe::operator=(PmergeMe const &rhs)
{
	(void)rhs;
	return *this;
}

PmergeMe::~PmergeMe() {}
