/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:51 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 15:21:07 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Constructors
Form::Form():
	_name("Default name"),
	_gradeToExecute(1),
	_gradeToSign(1)
{
	_signed = false;
}

Form::Form(const Form &copy):
	_name(copy.getName()),
	_gradeToExecute(copy.getGradeToExecute()),
	_gradeToSign(copy.getGradeToSign())
{
	_signed = copy.isSigned();
}

Form::Form(const std::string name, int gradeToSigne, int gradeToExecute):
	_name(name),
	_gradeToExecute(gradeToExecute),
	_gradeToSign(gradeToSigne)
{
	if(gradeToSigne < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if(gradeToSigne > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
	{
		_signed = false;
	}
}


// Destructor
Form::~Form()
{
}


// Operators
Form & Form::operator=(const Form &assign)
{
	_signed = assign.isSigned();
	return *this;
}


// Getters
const std::string Form::getName() const
{
	return _name;
}

bool Form::isSigned() const
{
	return _signed;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

// Exceptions
const char* Form::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

const char* Form::AlreadySignedException::what() const throw()
{
	return "The form is already signed";
}

const char* Form::NotSignedException::what() const throw()
{
	return "The form is not signed";
}

// Methods
void Form::beSigned(Bureaucrat bureaucrat)
{
	if(_signed)
		throw Form::AlreadySignedException();
	if(bureaucrat.getGrade() <= _gradeToSign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

void Form::execute(Bureaucrat const & executor) const
{
	if(!_signed)
		throw Form::NotSignedException();
	if(executor.getGrade() <= _gradeToExecute)
		executed();
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &stream, Form const &form)
{
	stream << "\e[0;35m" << form.getName() << ", " << (form.isSigned() ? "Signed" : "Not actually signed") << ", Grade to sign: " << form.getGradeToSign() << ", Grade to execute: " << form.getGradeToExecute() << ".\e[0m";
	return stream;
}