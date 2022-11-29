/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/03 15:13:41 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		std::cout << "\e[0;33m===== Basic test =====\e[0m" << std::endl;
		Bureaucrat george = Bureaucrat("George", 35);
		std::cout << george << std::endl;
		george.incrementGrade();
		std::cout << george << std::endl;
		george.incrementGrade(10);
		std::cout << george << std::endl;
		george.decrementGrade();
		std::cout << george << std::endl;
		george.decrementGrade(10);
		std::cout << george << std::endl;
	}
	{
		std::cout << "\e[0;33m===== Constructor test =====\e[0m" << std::endl;
		try
		{
			Bureaucrat george = Bureaucrat("George", 35);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 1);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 150);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 0);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		try
		{
			Bureaucrat george = Bureaucrat("George", 167);
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "\e[0;33m===== Increment test =====\e[0m" << std::endl;
		Bureaucrat george = Bureaucrat("George", 2);
		try
		{
			george.incrementGrade();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.incrementGrade();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.incrementGrade();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
	{
		std::cout << "\e[0;33m===== Decrement test =====\e[0m" << std::endl;
		Bureaucrat george = Bureaucrat("George", 149);
		try
		{
			george.decrementGrade();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.decrementGrade();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
		std::cout << george << std::endl;
		try
		{
			george.decrementGrade();
			std::cout << "\e[0;32mWorked !\e[0m" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "\e[0;31mError: " << e.what() << "\e[0m" << std::endl;;
		}
	}
}