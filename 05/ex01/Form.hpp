/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:52:54 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 15:17:58 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
	public:
		// Constructors
		Form();
		Form(const Form &copy);
		Form(const std::string name, int gradeToSign, int gradeToExecute);
		
		// Destructor
		~Form();
		
		// Operators
		Form & operator=(const Form &assign);
		
		// Getters / Setters
		const std::string getName() const;
		bool isSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		// Exceptions
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class AlreadySignedException: public std::exception {
			virtual const char* what() const throw();
		};

		//Methods
		void beSigned(Bureaucrat bureaucrat);
		
	private:
		const std::string _name;
		bool _signed;
		const int _gradeToExecute;
		const int _gradeToSign;
		
};

std::ostream &operator<<(std::ostream &stream, Form const &bureaucrat);

#endif