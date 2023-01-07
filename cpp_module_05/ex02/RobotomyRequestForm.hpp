/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 21:21:36 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/07 21:39:44 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <random>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();

		void	execute(Bureaucrat const &executor) const;

		class FailedException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
