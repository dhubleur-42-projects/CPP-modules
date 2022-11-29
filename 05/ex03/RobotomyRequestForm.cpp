/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:11:16 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/08 15:36:11 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("RobotomyRequestForm", 72, 45)
{
	_target = "Default target";
	srand(time(NULL));
}
RobotomyRequestForm::RobotomyRequestForm(std:: string target):
	Form("RobotomyRequestForm", 72, 45)
{
	_target = target;
	srand(time(NULL));
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy):
	Form(copy)
{
	_target = copy.getTarget();
	srand(time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &assign)
{
	Form::operator=(assign);
	_target = assign.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

void					RobotomyRequestForm::executed() const
{
	std::cout << "\e[0;35mCling........vrrrr........pfiou.......\e[0m" << std::endl;
	if(rand() % 2 == 0)
		std::cout << "\e[0;32m" << _target << " was robotomized !\e[0m" << std::endl;
	else
		std::cout << "\e[0;31mThe robotization failed !\e[0m" << std::endl;
}