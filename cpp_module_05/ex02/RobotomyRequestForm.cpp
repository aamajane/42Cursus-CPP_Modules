/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:21:40 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 19:38:48 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void	RobotomyRequestForm::action() const
{
	std::cout << "Drilling noises" << std::endl;
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}

const char	*RobotomyRequestForm::NothingException::what() const throw()
{
	return "Nothing happened";
}
