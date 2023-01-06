/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/06 16:42:29 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "=============== TEST1 ===============" << std::endl;
	try
	{
		Bureaucrat	bureaucrat("One", 2);
		std::cout << bureaucrat;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
		bureaucrat.incrementGrade();
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "=============== TEST2 ===============" << std::endl;
	try
	{
		Bureaucrat	bureaucrat("Tow", 149);
		std::cout << bureaucrat;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
		bureaucrat.decrementGrade();
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "=============== TEST3 ===============" << std::endl;
	try
	{
		Bureaucrat	bureaucrat("Three", 0);
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "=============== TEST4 ===============" << std::endl;
	try
	{
		Bureaucrat	bureaucrat("Four", 151);
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
