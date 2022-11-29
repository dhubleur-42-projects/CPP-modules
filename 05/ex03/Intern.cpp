/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:55:22 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 15:25:57 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{}
Intern::Intern(const Intern &copy)
{(void)copy;}
Intern::~Intern()
{}
Intern & Intern::operator=(const Intern &assign)
{(void)assign; return *this;}

static Form *createShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}
static Form *createRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}
static Form *createPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

const char* Intern::NonExistingFormName::what() const throw()
{
	return "Non existing form name";
}

Form *Intern::makeForm(std::string formName, std::string targetName)
{
	FormsList forms[3] = 
	{
		{"shrubbery creation", &createShrubberyCreationForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"presidential pardon", &createPresidentialPardonForm}
	};
	for(int i = 0; i < 3; i++)
	{
		if(forms[i].formName == formName)
		{
			Form *form = forms[i].creator(targetName);
			std::cout << "\e[0;32mIntern creates " << *form << "\e[0m" << std::endl;
			return form;
		}
	}
	std::cout << "\e[0;31mPlease use one of the following names:" << std::endl;
	for(int i = 0; i < 3; i++)
	{
		std::cout << "- " << forms[i].formName << std::endl;
	}
	std::cout << "\e[0m";
	throw Intern::NonExistingFormName();
}