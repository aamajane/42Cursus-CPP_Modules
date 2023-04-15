/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:48 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/15 04:09:27 by aamajane         ###   ########.fr       */
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
	_exp = rhs._exp;
	_stack = rhs._stack;
	return *this;
}

RPN::~RPN() {}

bool	RPN::isOperator(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

void	RPN::isExpressionValid(std::string const &str)
{
	if (str.empty())
		throw std::runtime_error("Error");

	_exp = str;
	_exp.erase(std::remove(_exp.begin(), _exp.end(), ' '), _exp.end());

	int	digitCount = 0;
	int	operatorCount = 0;

	for (size_t i = 0; i < _exp.length(); i++)
	{
		if (std::isdigit(_exp[i]))
			digitCount++;
		else if (isOperator(_exp[i]))
			operatorCount++;
		else
			throw std::runtime_error("Error");
	}

	if (digitCount - operatorCount != 1)
		throw std::runtime_error("Error");
}

void	RPN::calculateRPN()
{
	for (size_t i = 0; i < _exp.length(); i++)
	{
		if (std::isdigit(_exp[i]))
			_stack.push(_exp[i] - '0');
		else if (isOperator(_exp[i]))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error");

			float	rhs = _stack.top();
			_stack.pop();
			float	lhs = _stack.top();
			_stack.pop();

			switch (_exp[i])
			{
				case '+':
					_stack.push(lhs + rhs);
					break;
				case '-':
					_stack.push(lhs - rhs);
					break;
				case '*':
					_stack.push(lhs * rhs);
					break;
				case '/':
					_stack.push(lhs / rhs);
					break;
			}
		}
	}

	std::cout << _stack.top() << std::endl;
}
