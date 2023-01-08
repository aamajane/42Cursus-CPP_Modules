/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:59:27 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 16:23:57 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string	_target;

	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		void	action() const;

		class NothingdException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
};

#endif
