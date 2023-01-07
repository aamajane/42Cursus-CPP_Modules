/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:54:24 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/07 23:31:49 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void	ShrubberyCreationForm::action() const
{
	std::ofstream file;
	file.open(this->_target + "_shrubbery");
	if (!file.is_open())
		throw ShrubberyCreationForm::OpenException();
	file << "                  +                       " << std::endl;
	file << "                  #                       " << std::endl;
	file << "                 ###                      " << std::endl;
	file << "         \"#:   :##\"##:   :#\"           " << std::endl;
	file << "           \"####\"###\"####\"            " << std::endl;
	file << "     \"#:      :#\"###\"#:      :#\"      " << std::endl;
	file << "        \"#########\"#########\"          " << std::endl;
	file << "     \"#:   \"####\"###\"####\"   :#\"    " << std::endl;
	file << "      \"#######\"\"##\"##\"\"#######\"    " << std::endl;
	file << "         \"##\"#####\"#####\"##\"         " << std::endl;
	file << "\"#:      :##\"###\"###\"##:          :#\"" << std::endl;
	file << "    \"#######\"##\"#####\"##\"#######\"   " << std::endl;
	file << "       \"#####\"\"#######\"\"#####\"      " << std::endl;
	file << "          \"      000      \"             " << std::endl;
	file << "                 000                      " << std::endl;
	file << "................O000O....................." << std::endl;
	if (file.bad())
		throw ShrubberyCreationForm::WriteException();
	file.close();
	if (file.bad())
		throw ShrubberyCreationForm::CloseException();
}

const char	*ShrubberyCreationForm::OpenException::what() const throw()
{
	return "Error: File could not be opened";
}

const char	*ShrubberyCreationForm::WriteException::what() const throw()
{
	return "Error: File could not be written";
}

const char	*ShrubberyCreationForm::CloseException::what() const throw()
{
	return "Error: File could not be closed";
}
