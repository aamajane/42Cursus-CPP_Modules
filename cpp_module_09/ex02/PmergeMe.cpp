/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:57 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/12 21:24:43 by aamajane         ###   ########.fr       */
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

std::vector<int>	PmergeMe::getVec()
{
	return this->_vec;
}

std::list<int>	PmergeMe::getLst()
{
	return this->_lst;
}

void	PmergeMe::isSequenceValid(std::string const &str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (!isdigit(str[i]) && str[i] != ' ')
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

			int	nbr = std::stoi(tmp);

			this->_vec.push_back(nbr);
			this->_lst.push_back(nbr);
		}
	}

	if (this->_vec.size() < 2)
		throw std::runtime_error("Error: Invalid sequence");
	
	if (std::is_sorted(this->_vec.begin(), this->_vec.end()))
		throw std::runtime_error("Error: Sequence already sorted");

	std::vector<int>	tmp = this->_vec;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator	it = std::unique(tmp.begin(), tmp.end());
	if (it != tmp.end())
		throw std::runtime_error("Error: Sequence contains duplicates");
}

void	PmergeMe::printSequence()
{
	for (size_t i = 0; i < this->_vec.size(); i++)
	{
		std::cout << this->_vec[i];
		if (i != this->_vec.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}
