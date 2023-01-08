/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:54:21 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 02:14:41 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();

		void	action() const;

		class OpenException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class WriteException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};

		class CloseException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#endif
