/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:57 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/14 00:45:08 by aamajane         ###   ########.fr       */
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

void	PmergeMe::isSequenceValid(size_t ac, char **av)
{
	for (size_t i = 1; i < ac; i++)
	{
		std::string	str = av[i];

		if (str.empty())
			throw std::runtime_error("Error: Invalid sequence");

		for (size_t j = 0; j < str.length(); j++)
			if (!std::isdigit(str[j]))
				throw std::runtime_error("Error: Invalid sequence");

		int	nbr = std::stoi(str);

		this->_vec.push_back(nbr);
		this->_lst.push_back(nbr);
	}

	if (std::is_sorted(this->_vec.begin(), this->_vec.end()))
		throw std::runtime_error("Error: Sequence already sorted");
}

void	PmergeMe::sortSequence()
{
	std::cout << "Before: ";
	printSequence();

	time_t vecStart = clock();
	this->_vec = mergeInsertionSort(this->_vec);
	double vecElapsedTime = clock() - vecStart;

	clock_t lstStart = clock();
	this->_lst = mergeInsertionSort(this->_lst);
	double lstElapsedTime = clock() - lstStart;

	std::cout << "After: ";
	printSequence();

	printTime(vecElapsedTime, "vector");
	printTime(lstElapsedTime, "list");
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

void	PmergeMe::printTime(clock_t elapsedTime, std::string type)
{
	std::cout << "Time to process a range of ";
	if (type == "vector")
		std::cout << this->_vec.size() << " elements with std::vector : ";
	else
		std::cout << this->_lst.size() << " elements with std::list   : ";
	std::cout << elapsedTime  << " us" << std::endl;
}
