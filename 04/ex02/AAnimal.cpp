/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:04:48 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 13:08:31 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "\e[0;33mDefault Animal constructor called\e[0m" << std::endl;
	_type = "A random animal";
}
AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "\e[0;33mCopy Animal constructor called\e[0m" << std::endl;
	_type = copy.getType();
}

AAnimal & AAnimal::operator=(const AAnimal &assign)
{
	_type = assign.getType();
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "\e[0;31mAnimal Destructor called\e[0m" << std::endl;
}

std::string	AAnimal::getType() const
{
	return _type;
}
void AAnimal::makeSound() const
{
}