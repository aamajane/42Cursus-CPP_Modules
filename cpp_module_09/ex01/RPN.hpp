/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:50 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/07 20:10:17 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <algorithm>
#include <iostream>
#include <stack>

class RPN
{
	private:
		std::string			_exp;
		std::stack<float>	_stack;

	public:
		RPN();
		RPN(RPN const &copy);
		RPN &operator=(RPN const &rhs);
		~RPN();

		bool	isOperator(char c);
		void	isExpressionValid(std::string const &str);
		void	calculate();
};

#endif
