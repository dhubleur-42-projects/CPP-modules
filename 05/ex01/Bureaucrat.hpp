/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:54 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 14:58:15 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat
{
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat(const std::string name, int grade);
		
		// Destructor
		~Bureaucrat();
		
		// Operators
		Bureaucrat & operator=(const Bureaucrat &assign);
		
		// Getters / Setters
		const std::string getName() const;
		int getGrade() const;

		// Exceptions
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

		//Methods
		void	incrementGrade();
		void	incrementGrade(int i);
		void	decrementGrade();
		void	decrementGrade(int i);
		void	signForm(Form &form);
		
	private:
		const std::string _name;
		int _grade;
		
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat);

#endif