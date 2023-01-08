/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 00:59:55 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(int ac, char **av)
{
	if (ac != 6)
	{
		std::cout << "Usage: "
		<< "./program "
		<< "[Bureaucrat name] "
		<< "[Bureaucrat grade] "
		<< "[Form name] "
		<< "[Grade to sign] "
		<< "[Grade to excute]" << std::endl;

		return 0;
	}

	try
	{
		std::string	bureaucratName = av[1];
		int			bureaucratGrade = atoi(av[2]);
		std::string	formName = av[3];
		int			gradeToSign = atoi(av[4]);
		int			gradeToExecute = atoi(av[5]);

		Bureaucrat	bureaucrat(bureaucratName, bureaucratGrade);
		Form		form(formName, gradeToSign, gradeToExecute);
	
		std::cout << bureaucrat;
		std::cout << form;
		bureaucrat.signForm(form);
		std::cout << form;
		bureaucrat.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
