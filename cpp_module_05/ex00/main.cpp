/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:55 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/06 21:29:31 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	std::cout << "=============== TEST1 ===============" << std::endl;
	try
	{
		Bureaucrat	bureaucrat("OMAR", 2);
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
		Bureaucrat	bureaucrat("AYOUB", 149);
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
		Bureaucrat	bureaucrat("ANASS", 0);
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "=============== TEST4 ===============" << std::endl;
	try
	{
		Bureaucrat	bureaucrat("MOHAMMED", 151);
		std::cout << bureaucrat;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
