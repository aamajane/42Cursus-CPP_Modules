/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:59:28 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/07 23:32:21 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5),
	_target(target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const char	*PresidentialPardonForm::NothingdException::what() const throw()
{
	return "Nothing happened";
}
