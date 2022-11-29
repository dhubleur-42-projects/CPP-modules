/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:09:57 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/24 18:45:02 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "\e[0;35m[DEBUG]\e[0m" << std::endl << "This is a DEBUG message !" << std::endl;
}
void Harl::info( void )
{
	std::cout << "\e[0;32m[INFO]\e[0m" << std::endl << "This is an INFO message !" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "\e[0;33m[WARNING]\e[0m" << std::endl << "This is a WARNING message !" << std::endl;
}
void Harl::error( void )
{
	std::cout << "\e[0;31m[ERROR]\e[0m" << std::endl << "This is an ERROR message !" << std::endl;
}

Harl::Harl()
{}

void Harl::complain(std::string level)
{
	LevelList list[4] =
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	for(int i = 0; i < 4; i++)
	{
		if(list[i].name == level)
		{
			(this->*list[i].fct)();
			return;
		}
	}
	std::cout << "\e[0;31mImpossible to find this level of message (\"" << level << "\")\e[0m" << std::endl;
}