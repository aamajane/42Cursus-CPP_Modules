/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 13:00:00 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/12 23:30:33 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

class PmergeMe
{
	private:
		std::vector<int>	_vec;
		std::list<int>		_lst;

	public:
		PmergeMe();
		PmergeMe(PmergeMe const &copy);
		PmergeMe &operator=(PmergeMe const &rhs);
		~PmergeMe();

		void	isSequenceValid(size_t ac, char **av);
		void	sortSequence();
		void	printSequence();

		template <typename T>
		T	insertionSort(T &container)
		{
			for (typename T::iterator iter1 = container.begin(); iter1 != container.end(); iter1++)
			{
				for (typename T::iterator iter2 = container.begin(); iter2 != iter1; iter2++)
				{
					if (*iter1 < *iter2)
						std::swap(*iter1, *iter2);
				}
			}
			return container;
		}

		template <typename T>
		T	mergeSort(T &left, T &right)
		{
			T	result;

			typename T::iterator	leftIter = left.begin();
			typename T::iterator	rightIter = right.begin();

			while (leftIter != left.end() && rightIter != right.end())
			{
				if (*leftIter < *rightIter)
				{
					result.push_back(*leftIter);
					leftIter++;
				}
				else
				{
					result.push_back(*rightIter);
					rightIter++;
				}
			}

			while (leftIter != left.end())
			{
				result.push_back(*leftIter);
				leftIter++;
			}

			while (rightIter != right.end())
			{
				result.push_back(*rightIter);
				rightIter++;
			}

			return result;
		}

		template <typename T>
		T	mergeInsertionSort(T &container)
		{
			if (container.size() < 16)
				return insertionSort(container);

			int	mid = container.size() / 2;
			T	left(container.begin(), next(container.begin(), mid));
			T	right(next(container.begin(), mid), container.end());

			left = mergeInsertionSort(left);
			right = mergeInsertionSort(right);

			return mergeSort(left, right);
		}
};

#endif
