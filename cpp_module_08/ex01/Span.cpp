/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:19 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/15 00:02:55 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0) {}

Span::Span(unsigned int n) : n(n) {}

Span::Span(Span const &copy)
{
	*this = copy;
}

Span &Span::operator=(Span const &rhs)
{
	vec = rhs.vec;
	n = rhs.n;
	return (*this);
}

Span::~Span() {}

void	Span::addNumber(int nb)
{
	if (vec.size() == n)
		throw Span::SpanFullException();
	vec.push_back(nb);
}

void	Span::addMultiNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (vec.size() + (end - begin) > n)
		throw Span::SpanFullException();
	vec.insert(vec.end(), begin, end);
}

int		Span::shortestSpan()
{
	if (vec.size() < 2)
		throw Span::SpanEmptyException();
	std::vector<int>	tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	int	min = tmp[1] - tmp[0];
	for (unsigned int i = 2; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < min)
			min = tmp[i] - tmp[i - 1];
	}
	return (min);
}

int		Span::longestSpan()
{
	if (vec.size() < 2)
		throw Span::SpanEmptyException();
	std::vector<int>	tmp = vec;
	std::sort(tmp.begin(), tmp.end());
	int	max = tmp[tmp.size() - 1] - tmp[0];
	return (max);
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::SpanEmptyException::what() const throw()
{
	return ("Span is empty");
}
