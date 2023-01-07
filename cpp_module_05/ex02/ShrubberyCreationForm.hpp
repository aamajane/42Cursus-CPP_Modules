/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:54:21 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/07 20:36:50 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();

		void	execute(Bureaucrat const &executor) const;

		class OpenException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class WriteException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class CloseException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
