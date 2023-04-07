/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:48 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/07 01:48:23 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &copy)
{
	*this = copy;
}

RPN &RPN::operator=(RPN const &rhs)
{
	this->_numbers = rhs._numbers;
	this->_operators = rhs._operators;
	return *this;
}

RPN::~RPN() {}

bool	RPN::isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	RPN::isExpressionValid(std::string const &str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (str[i] != ' ' && !isdigit(str[i]) && !isOperator(str[i]))
			throw std::runtime_error("Error");
}

void	RPN::processExpression(std::string const &str)
{
	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (isdigit(str[i]))
			this->_numbers.push(str[i] - '0');
		else if (isOperator(str[i]))
			this->_operators.push(str[i]);
	}
	if (this->_numbers.empty() || this->_operators.empty() ||
		this->_numbers.size() != this->_operators.size() + 1)
		throw std::runtime_error("Error");
}

void	RPN::calculate(void)
{
	float	result = this->_numbers.top();
	this->_numbers.pop();
	while (!this->_numbers.empty())
	{
		if (this->_operators.top() == '+')
			result += this->_numbers.top();
		else if (this->_operators.top() == '-')
			result -= this->_numbers.top();
		else if (this->_operators.top() == '*')
			result *= this->_numbers.top();
		else if (this->_operators.top() == '/')
			result /= this->_numbers.top();
		this->_numbers.pop();
		this->_operators.pop();
	}
	std::cout << result << std::endl;
}
