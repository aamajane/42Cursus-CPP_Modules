/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 00:38:00 by aamajane         ###   ########.fr       */
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
		std::cout << "Usage: ./program [Target] [Bureaucrat name] [Bureaucrat grade] [Test number]" << std::endl;
		return 0;
	}

	std::string	target = av[1];
	std::string	name = av[2];
	int			grade = atoi(av[3]);
	int			test = atoi(av[4]);

	if (test == 1)
	{
		try
		{
			Form		*form = new ShrubberyCreationForm(target);
			Bureaucrat	*bureaucrat = new Bureaucrat(name, grade);

			std::cout << *bureaucrat;
			std::cout << *form;
			bureaucrat->executeForm(*form);
			bureaucrat->signForm(*form);
			std::cout << *form;
			bureaucrat->executeForm(*form);

			delete bureaucrat;
			delete form;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	else if (test == 2)
	{
		try
		{
			Form		*form = new RobotomyRequestForm(target);
			Bureaucrat	*bureaucrat = new Bureaucrat(name, grade);

			std::cout << *bureaucrat;
			std::cout << *form;
			bureaucrat->executeForm(*form);
			bureaucrat->signForm(*form);
			std::cout << *form;
			bureaucrat->executeForm(*form);

			delete bureaucrat;
			delete form;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	else if (test == 3)
	{
		try
		{
			Form		*form = new PresidentialPardonForm(target);
			Bureaucrat	*bureaucrat = new Bureaucrat(name, grade);

			std::cout << *bureaucrat;
			std::cout << *form;
			bureaucrat->executeForm(*form);
			bureaucrat->signForm(*form);
			std::cout << *form;
			bureaucrat->executeForm(*form);

			delete bureaucrat;
			delete form;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}
