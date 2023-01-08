/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:58 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/07 23:48:43 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat(std::string const &name, int grade);
		~Bureaucrat();

		std::string const	getName() const;
		int					getGrade() const;

		void	incrementGrade();
		void	decrementGrade();
		
		void	signForm(Form &form);
		void	executeForm(Form const &form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif
