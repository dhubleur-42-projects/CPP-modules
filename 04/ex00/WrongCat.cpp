/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:14:24 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 12:54:46 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "\e[0;33mDefault WrongCat constructor called\e[0m" << std::endl;
	_type = "WrongCat";
}
WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "\e[0;33mCopy WrongCat constructor called\e[0m" << std::endl;
	_type = copy.getType();
}

WrongCat::~WrongCat()
{
	std::cout << "\e[0;31mWrongCat Destructor called\e[0m" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "\e[0;32mMiaou...\e[0m" << std::endl;
}