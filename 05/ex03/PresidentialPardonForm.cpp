/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:11:16 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:36:11 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("PresidentialPardonForm", 25, 5)
{
	_target = "Default target";
	srand(time(NULL));
}
PresidentialPardonForm::PresidentialPardonForm(std:: string target):
	Form("PresidentialPardonForm", 25, 5)
{
	_target = target;
	srand(time(NULL));
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy):
	Form(copy)
{
	_target = copy.getTarget();
	srand(time(NULL));
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &assign)
{
	Form::operator=(assign);
	_target = assign.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

void					PresidentialPardonForm::executed() const
{
	std::cout << "\e[0;35m" << _target << " has been pardoned by Zaphod Beeblebrox\e[0m" << std::endl;
}