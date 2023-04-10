/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:57 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/10 01:26:39 by aamajane         ###   ########.fr       */
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
	this->_vec = rhs._vec;
	this->_lst = rhs._lst;
	return *this;
}

PmergeMe::~PmergeMe() {}

void	PmergeMe::isSequenceValid(std::string const &str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (!isdigit(str[i]) && str[i] != ' ')
			throw std::runtime_error("Error: Invalid sequence");

	if (std::count(str.begin(), str.end(), ' ') == str.length())
		throw std::runtime_error("Error: Invalid sequence");

	for (size_t i = 0; i < str.length(); i++)
	{
		while (str[i] == ' ')
			i++;

		if (isdigit(str[i]))
		{
			std::string	tmp = "";
			while (isdigit(str[i]))
				tmp += str[i++];
			if (tmp.length() > 10)
				throw std::runtime_error("Error: Invalid sequence");

			int	nbr = std::stoi(tmp);
			if (nbr < 0)
				throw std::runtime_error("Error: Invalid sequence");

			this->_vec.push_back(nbr);
			this->_lst.push_back(nbr);
		}
	}
}
