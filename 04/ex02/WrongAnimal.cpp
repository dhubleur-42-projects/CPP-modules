/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:04:48 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 12:53:02 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\e[0;33mDefault WrongAnimal constructor called\e[0m" << std::endl;
	_type = "A random WrongAnimal";
}
WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "\e[0;33mCopy WrongAnimal constructor called\e[0m" << std::endl;
	_type = copy.getType();
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\e[0;31mWrongAnimal Destructor called\e[0m" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}
void WrongAnimal::makeSound() const
{
	std::cout << "\e[0;32mWhat's the default sound of an animal ?\e[0m" << std::endl;
}