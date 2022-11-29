/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:24 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/07 14:39:48 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "\e[0;33mDefault Dog constructor called\e[0m" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}
Dog::Dog(const Dog &copy)
{
	std::cout << "\e[0;33mCopy Dog constructor called\e[0m" << std::endl;
	_type = copy.getType();
	_brain = new Brain(*(copy.getBrain()));
}

Dog::~Dog()
{
	std::cout << "\e[0;31mDog Destructor called\e[0m" << std::endl;
	delete(_brain);
}

void Dog::makeSound() const
{
	std::cout << "\e[0;32mWouaf...\e[0m" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return _brain;
}