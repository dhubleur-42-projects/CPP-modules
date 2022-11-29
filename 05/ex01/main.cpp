/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:00:33 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	{
		std::cout << "===== Basic test =====" << std::endl;
		Form form = Form("Super form", 42, 41);
		std::cout << form << std::endl;
	}
	{
		std::cout << "===== Exceptions test =====" << std::endl;
		try
		{
			Form form = Form("Super form", 42, 42);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 0, 42);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 42, 0);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 164, 42);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Form form = Form("Super form", 42, 164);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "===== BeSigned test =====" << std::endl;
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 2 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 45);
			std::cout << george << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 3 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
			try
			{
				form.beSigned(george);
			}
			catch(const std::exception& e)
			{
				std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
			}
			std::cout << form << std::endl;
		}
	}
	{
		std::cout << "===== Sign test =====" << std::endl;
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			george.signForm(form);
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 2 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 45);
			george.signForm(form);
			std::cout << form << std::endl;
		}
		std::cout << "----- Test 3 -----" << std::endl; 
		{
			Form form = Form("Super form", 42, 42);
			std::cout << form << std::endl;
			Bureaucrat george = Bureaucrat("George", 40);
			std::cout << george << std::endl;
			george.signForm(form);
			std::cout << form << std::endl;
			george.signForm(form);
			std::cout << form << std::endl;
		}
	}
}