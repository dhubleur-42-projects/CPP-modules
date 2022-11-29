/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:52:23 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	{
		std::cout << "===== Form Error =====" << std::endl;
		PresidentialPardonForm form = PresidentialPardonForm("Error");
		Bureaucrat george = Bureaucrat("George", 20);
		try
		{
			form.execute(george);
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		george.signForm(form);
		try
		{
			form.execute(george);
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		Bureaucrat master = Bureaucrat("Master", 1);
		try
		{
			form.execute(master);
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "===== Bureaucrat sign Error =====" << std::endl;
		PresidentialPardonForm form = PresidentialPardonForm("Error");
		Bureaucrat george = Bureaucrat("George", 20);
		george.executeForm(form);
		george.signForm(form);
		george.executeForm(form);
		Bureaucrat master = Bureaucrat("Master", 1);
		master.executeForm(form);
	}
	{
		std::cout << "===== ShrubberyCreationForm =====" << std::endl;
		ShrubberyCreationForm form = ShrubberyCreationForm("Test");
		Bureaucrat george = Bureaucrat("George", 1);
		george.signForm(form);
		george.executeForm(form);
	}
	{
		std::cout << "===== RobotomyRequestForm =====" << std::endl;
		RobotomyRequestForm form = RobotomyRequestForm("Test");
		Bureaucrat george = Bureaucrat("George", 1);
		george.signForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
		george.executeForm(form);
	}
	{
		std::cout << "===== PresidentialPardonForm =====" << std::endl;
		PresidentialPardonForm form = PresidentialPardonForm("Test");
		Bureaucrat george = Bureaucrat("George", 1);
		george.signForm(form);
		george.executeForm(form);
	}
}