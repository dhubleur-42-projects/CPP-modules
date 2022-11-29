/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:04:48 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 11:22:51 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\e[0;33mDefault Animal constructor called\e[0m" << std::endl;
	_type = "A random animal";
}
Animal::Animal(const Animal &copy)
{
	std::cout << "\e[0;33mCopy Animal constructor called\e[0m" << std::endl;
	_type = copy.getType();
}

Animal & Animal::operator=(const Animal &assign)
{
	_type = assign.getType();
	return *this;
}

Animal::~Animal()
{
	std::cout << "\e[0;31mAnimal Destructor called\e[0m" << std::endl;
}

std::string	Animal::getType() const
{
	return _type;
}
void Animal::makeSound() const
{
}