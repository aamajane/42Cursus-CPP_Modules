/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 12:59:50 by aamajane          #+#    #+#             */
/*   Updated: 2023/04/06 22:48:30 by aamajane         ###   ########.fr       */
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
		std::stack<float>	_stack;

	public:
		RPN();
		RPN(RPN const &copy);
		RPN &operator=(RPN const &rhs);
		~RPN();

		void	calculate(std::string const &str);
};

#endif
