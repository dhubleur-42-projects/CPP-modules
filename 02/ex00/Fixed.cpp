/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:54 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 13:46:46 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault constructor called\e[0m" << std::endl;
	_raw_bits = 0;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "\e[0;33mCopy constructor called\e[0m" << std::endl;
	_raw_bits = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &assign)
{
	std::cout << "\e[0;34mCopy assignment operator called\e[0m" << std::endl;
	_raw_bits = assign.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "\e[0;36mgetRawBits member function called\e[0m" << std::endl;
	return _raw_bits;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "\e[0;36msetRawBits member function called\e[0m" << std::endl;
	_raw_bits = raw;
}