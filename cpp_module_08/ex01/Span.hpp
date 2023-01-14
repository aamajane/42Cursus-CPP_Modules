/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:22 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 22:51:36 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>

class Span
{
	private:
		unsigned int	n;
		unsigned int	size;
		int				*array;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		Span &operator=(Span const &rhs);
		~Span();

		void	addNumber(int nb);
		int		shortestSpan();
		int		longestSpan();

		class SpanFullException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Span is full");
				}
		};

		class SpanEmptyException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Span is empty");
				}
		};
};

#endif
