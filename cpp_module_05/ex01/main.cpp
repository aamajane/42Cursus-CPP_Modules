/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 00:45:49 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	bureaucrat("OMAR", 3);
		Form		form("Birth Certificate", 2, 1);
	
		std::cout << bureaucrat;
		std::cout << form;
		bureaucrat.signForm(form);
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
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
