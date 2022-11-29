/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:09:13 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:39:23 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);

		~PresidentialPardonForm();

		PresidentialPardonForm & operator=(const PresidentialPardonForm &assign);

		std::string getTarget() const;

		void executed() const;

	private:
		std::string _target;
};

#endif