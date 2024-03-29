/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:57 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/15 03:21:50 by aamajane         ###   ########.fr       */
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
	_vec = rhs._vec;
	_lst = rhs._lst;
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

		_vec.push_back(nbr);
		_lst.push_back(nbr);
	}

	if (std::is_sorted(_vec.begin(), _vec.end()))
		throw std::runtime_error("Error: Sequence already sorted");
}

void	PmergeMe::sortSequence()
{
	std::cout << "Before: ";
	printSequence();

	clock_t	startVec = clock();
	_vec = mergeInsertionSort(_vec);
	clock_t	endVec = clock();
	clock_t elapsedTimeVec = endVec - startVec;

	clock_t startLst = clock();
	_lst = mergeInsertionSort(_lst);
	clock_t endLst = clock();
	clock_t elapsedTimeLst = endLst - startLst;

	std::cout << "After: ";
	printSequence();

	printTime(elapsedTimeVec, "vector");
	printTime(elapsedTimeLst, "list");
}

void	PmergeMe::printSequence()
{
	for (size_t i = 0; i < _vec.size(); i++)
	{
		std::cout << _vec[i];
		if (i != _vec.size() - 1)
			std::cout << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printTime(clock_t elapsedTime, std::string type)
{
	std::cout << "Time to process a range of ";
	if (type == "vector")
		std::cout << _vec.size() << " elements with std::vector : ";
	else
		std::cout << _lst.size() << " elements with std::list   : ";
	std::cout << elapsedTime  << " us" << std::endl;
}
