/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:25:29 by aamajane          #+#    #+#             */
/*   Updated: 2023/01/08 22:52:20 by aamajane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : 
	_name("default"),
	_signed(false),
	_gradeToSign(150),
	_gradeToExecute(150)
{}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) :
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &copy) :
	_name(copy._name),
	_signed(copy._signed),
	_gradeToSign(copy._gradeToSign),
	_gradeToExecute(copy._gradeToExecute)
{
	*this = copy;
}

Form &Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return *this;
}

Form::~Form() {}

std::string const	Form::getName() const
{
	return this->_name;
}

bool	Form::getSigned() const
{
	return this->_signed;
}

int	Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else if (this->_signed == true)
		throw Form::AlreadySignedException();
	else
		this->_signed = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->_signed == false)
		throw Form::UnsignedException();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw Form::GradeTooLowException();
	else
		this->action();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Bureaucrat grade is too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Bureaucrat grade is too low";
}

const char	*Form::AlreadySignedException::what() const throw()
{
	return "Form is already signed";
}

const char	*Form::UnsignedException::what() const throw()
{
	return "Form is unsigned";
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	out << form.getName() << " is " 
	<< (form.getSigned() ? "signed" : "unsigned") 
	<< ", it requires a grade of " << form.getGradeToSign() 
	<< " to be signed and a grade of " << form.getGradeToExecute() 
	<< " to be executed" << std::endl;
	return out;
}
