/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 01:26:21 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 23:01:27 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		Form	*makeShrubberyCreationForm(std::string const &target);
		Form	*makeRobotomyRequestForm(std::string const &target);
		Form	*makePresidentialPardonForm(std::string const &target);

	public:
		Intern();
		Intern(Intern const &copy);
		Intern &operator=(Intern const &rhs);
		~Intern();

		Form	*makeForm(std::string const &name, std::string const &target);

		class UnknownFormException : public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
