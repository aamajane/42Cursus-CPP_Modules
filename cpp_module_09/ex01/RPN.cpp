/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:48 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/06 22:49:52 by aamajane         ###   ########.fr       */
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
	(void)rhs;
	return (*this);
}

RPN::~RPN() {}

void	RPN::calculate(std::string const &str)
{
	
}
