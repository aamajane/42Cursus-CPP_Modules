/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 01:31:03 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/13 18:34:44 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
	private:
		T				*array;
		unsigned int	len;

	public:
		Array() : array(new T[0]), len(0)
		{
		}

		Array(unsigned int n) : array(new T[n]), len(n)
		{
			for (unsigned int i = 0; i < len; i++)
				array[i] = T();
		}

		Array(Array const &copy)
		{
			array = NULL;
			*this = copy;
		}

		~Array()
		{
			delete [] array;
		}

		Array	&operator=(Array const &rhs)
		{
			if (array)
				delete [] array;
			array = new T[rhs.len];
			for (unsigned int i = 0; i < rhs.len; i++)
				array[i] = rhs.array[i];
			len = rhs.len;
			return *this;
		}

		T	&operator[](unsigned int i)
		{
			if (i >= len)
				throw std::exception();
			return array[i];
		}

		unsigned int	size() const
		{
			return len;
		}
};
