/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/09 21:04:51 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(int ac, char **av)
{
	if (ac != 5)
	{
		std::cout << "Usage: "
		<< "./program "
		<< "[Test number] "
		<< "[Target] "
		<< "[Bureaucrat name] "
		<< "[Bureaucrat grade] " << std::endl;

		return 0;
	}

	try
	{
		int			test = atoi(av[1]);
		std::string	target = av[2];
		std::string	name = av[3];
		int			grade = atoi(av[4]);

		Form		*form = NULL;
		Bureaucrat	bureaucrat(name, grade);
	
		if (test == 1)
			form = new ShrubberyCreationForm(target);

		else if (test == 2)
			form = new RobotomyRequestForm(target);

		else if (test == 3)
			form = new PresidentialPardonForm(target);

		std::cout << bureaucrat;
		std::cout << *form;
		bureaucrat.executeForm(*form);
		bureaucrat.signForm(*form);
		std::cout << *form;
		bureaucrat.executeForm(*form);

		delete form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
