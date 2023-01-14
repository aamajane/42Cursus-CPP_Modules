/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 22:22:19 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/14 22:59:31 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : n(0), size(0), array(NULL)
{
}

Span::Span(unsigned int n) : n(n), size(0), array(new int[n])
{
}

Span::Span(Span const &copy)
{
	array = NULL;
	*this = copy;
}

Span &Span::operator=(Span const &rhs)
{
	n = rhs.n;
	size = rhs.size;
	if (array)
		delete [] array;
	array = new int[n];
	for (unsigned int i = 0; i < size; i++)
		array[i] = rhs.array[i];
	return (*this);
}

Span::~Span()
{
	delete [] array;
}

void	Span::addNumber(int nb)
{
	if (size == n)
		throw Span::SpanFullException();
	array[size] = nb;
	size++;
}

int	Span::shortestSpan()
{
	if (size < 2)
		throw Span::SpanEmptyException();
	std::sort(array, array + size);
	int	min = array[1] - array[0];
	for (unsigned int i = 2; i < size; i++)
	{
		if (array[i] - array[i - 1] < min)
			min = array[i] - array[i - 1];
	}
	return min;
}

int	Span::longestSpan()
{
	if (size < 2)
		throw Span::SpanEmptyException();
	std::sort(array, array + size);
	int	max = array[size - 1] - array[0];
	return max;
}

const char *Span::SpanFullException::what() const throw()
{
	return ("Span is full");
}

const char *Span::SpanEmptyException::what() const throw()
{
	return ("Span is empty");
}
