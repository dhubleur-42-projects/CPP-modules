/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:54:59 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 16:19:27 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Intern & operator=(const Intern &assign);
		Form *makeForm(std::string formName, std::string targetName);
		class NonExistingFormName: public std::exception {
			virtual const char* what() const throw();
		};
	
	private:
		typedef Form* (*CreateFormFunction)(std::string target);
		typedef struct {std::string formName; CreateFormFunction creator;} FormsList;
};

#endif