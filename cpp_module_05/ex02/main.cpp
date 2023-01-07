/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 00:15:32 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(int ac, char **av)
{
	if (ac != 3)
		std::cout << "Usage: ./program [Test number] [Bureaucrat grade]" << std::endl;

	else if (atoi(av[1]) == 1)
	{
		try
		{
			Bureaucrat	*bureaucrat = new Bureaucrat("OMAR", atoi(av[2]));
			Form		*form = new ShrubberyCreationForm("home");

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

	else if (atoi(av[1]) == 2)
	{
		try
		{
			Bureaucrat	*bureaucrat = new Bureaucrat("OMAR", atoi(av[2]));
			Form		*form = new RobotomyRequestForm("home");

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

	else if (atoi(av[1]) == 3)
	{
		try
		{
			Bureaucrat	*bureaucrat = new Bureaucrat("OMAR", atoi(av[2]));
			Form		*form = new PresidentialPardonForm("home");

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
