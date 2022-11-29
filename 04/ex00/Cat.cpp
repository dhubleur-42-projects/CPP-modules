/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:24 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 11:19:11 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "\e[0;33mDefault Cat constructor called\e[0m" << std::endl;
	_type = "Cat";
}
Cat::Cat(const Cat &copy)
{
	std::cout << "\e[0;33mCopy Cat constructor called\e[0m" << std::endl;
	_type = copy.getType();
}

Cat::~Cat()
{
	std::cout << "\e[0;31mCat Destructor called\e[0m" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "\e[0;32mMiaou...\e[0m" << std::endl;
}