/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 02:53:25 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(int ac, char **av)
{
	if (ac != 5)
	{
		std::cout << "Usage: "
		<< "./program "
		<< "[Bureaucrat name] "
		<< "[Bureaucrat grade] "
		<< "[Target] " 
		<< "[Form name]" << std::endl;

		return 0;
	}

	try
	{
		std::string	bureaucratName = av[1];
		int			grade = atoi(av[2]);
		std::string	target = av[3];
		std::string	formName = av[4];

		Intern		intern;
		Bureaucrat	bureaucrat(bureaucratName, grade);
		Form		*form = intern.makeForm(formName, target);;
	
		std::cout << bureaucrat;
		std::cout << *form;
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);

		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
