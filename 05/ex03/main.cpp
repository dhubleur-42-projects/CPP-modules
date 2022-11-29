/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 16:23:04 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int	main()
{
	Intern intern = Intern();
	Bureaucrat master = Bureaucrat("Master", 1);
	Form *form;
	try
	{
		form = intern.makeForm("shrubbery creation", "Target1");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("robotomy request", "Target2");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("presidential pardon", "Target3");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
	try
	{
		form = intern.makeForm("another form", "Target4");
		master.signForm(*form);
		master.executeForm(*form);
		delete(form);
	}
	catch(const std::exception& e)
	{}
}