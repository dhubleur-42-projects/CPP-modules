/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:11:16 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 15:27:15 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyCreationForm", 145, 137)
{
	_target = "Default target";
}
ShrubberyCreationForm::ShrubberyCreationForm(std:: string target):
	Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy):
	Form(copy)
{
	_target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &assign)
{
	Form::operator=(assign);
	_target = assign.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void					ShrubberyCreationForm::executed() const
{
	std::ofstream file;

	std::remove(std::string(_target + "_shrubbery").c_str());
	file.open(std::string(_target + "_shrubbery").c_str(),
		std::ios::out | std::ios::app);
	if(file.is_open())
	{
		file << "             /\\" << std::endl;
		file << "            <  >" << std::endl;
		file << "             \\/" << std::endl;
		file << "             /\\" << std::endl;
		file << "            /  \\" << std::endl;
		file << "           /++++\\" << std::endl;
		file << "          /  ()  \\" << std::endl;
		file << "          /      \\" << std::endl;
		file << "         /~`~`~`~`\\" << std::endl;
		file << "        /  ()  ()  \\" << std::endl;
		file << "        /          \\" << std::endl;
		file << "       /*&*&*&*&*&*&\\" << std::endl;
		file << "      /  ()  ()  ()  \\" << std::endl;
		file << "      /              \\" << std::endl;
		file << "     /++++++++++++++++\\" << std::endl;
		file << "    /  ()  ()  ()  ()  \\" << std::endl;
		file << "    /                  \\" << std::endl;
		file << "   /~`~`~`~`~`~`~`~`~`~`\\" << std::endl;
		file << "  /  ()  ()  ()  ()  ()  \\" << std::endl;
		file << "  /*&*&*&*&*&*&*&*&*&*&*&\\" << std::endl;
		file << " /                        \\" << std::endl;
		file << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\" << std::endl;
		file << "           |   |" << std::endl;
		file << "          |`````|" << std::endl;
		file << "          \\_____/" << std::endl;
		file.close();
	}
}