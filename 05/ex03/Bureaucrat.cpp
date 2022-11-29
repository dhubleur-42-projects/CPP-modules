/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:51 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:30:20 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// Constructors
Bureaucrat::Bureaucrat():
	_name("Default name")
{
	_grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy):
	_name(copy.getName())
{
	_grade = copy.getGrade();
}

Bureaucrat::Bureaucrat(const std::string name, int grade):
	_name(name)
{
	if(grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if(grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}


// Destructor
Bureaucrat::~Bureaucrat()
{
}


// Operators
Bureaucrat & Bureaucrat::operator=(const Bureaucrat &assign)
{
	_grade = assign.getGrade();
	return *this;
}


// Getters
const std::string Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

// Exceptions
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The grade is too low";
}

// Methods
void Bureaucrat::incrementGrade(int i)
{
	if(_grade - i < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= i;
}
void Bureaucrat::incrementGrade()
{
	incrementGrade(1);
}

void Bureaucrat::decrementGrade(int i)
{
	if(_grade + i > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade += i;
}
void Bureaucrat::decrementGrade()
{
	decrementGrade(1);
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "\e[0;32m" << _name << " signed " << form.getName() << "\e[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\e[0;31m" << _name << " couldn't sign " << form.getName() << " because: " << e.what() << "\e[0m" << std::endl;
	}
	
}

void 	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << "\e[0;32m" << _name << " executed " << form.getName() << "\e[0m" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "\e[0;31m" << _name << " couldn't execute " << form.getName() << " because: " << e.what() << "\e[0m" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
	stream << "\e[0;35m" << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".\e[0m";
	return stream;
}