/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:22 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 23:58:12 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		std::vector<int>	vec;
		unsigned int		n;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span &operator=(Span const &rhs);
		~Span();

		void	addNumber(int nb);
		void	addMultiNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		class SpanFullException : public std::exception
		{
			public:
				const char *what() const throw();
		};

		class SpanEmptyException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
