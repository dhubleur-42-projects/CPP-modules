/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:09:13 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:51:36 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFROM_HPP
# define SHRUBERRYCREATIONFROM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);

		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=(const ShrubberyCreationForm &assign);

		std::string getTarget() const;

		void executed() const;

	private:
		std::string _target;
};

#endif