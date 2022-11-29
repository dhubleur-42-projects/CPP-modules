/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:24 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/07 14:36:25 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\e[0;33mDefault Cat constructor called\e[0m" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}
Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Cat constructor called\e[0m" << std::endl;
	_type = copy.getType();
	_brain = new Brain(*(copy.getBrain()));
}

Cat::~Cat()
{
	std::cout << "\e[0;31mCat Destructor called\e[0m" << std::endl;
	delete(_brain);
}

void Cat::makeSound() const
{
	std::cout << "\e[0;32mMiaou...\e[0m" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return _brain;
}