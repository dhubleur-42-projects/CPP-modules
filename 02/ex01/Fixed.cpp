/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:54 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 15:13:46 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "\e[0;33mDefault constructor called\e[0m" << std::endl;
	_raw_bits = 0;
}
Fixed::Fixed(int const i)
{
	std::cout << "\e[0;33mInt constructor called\e[0m" << std::endl;
	_raw_bits = i << _fractional_bits;
}
Fixed::Fixed(float const f)
{
	std::cout << "\e[0;33mFloat constructor called\e[0m" << std::endl;
	_raw_bits = roundf(f * (1 << _fractional_bits));
}
Fixed::Fixed(const Fixed &copy)
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
	return _raw_bits;
}
void Fixed::setRawBits(int const raw)
{
	_raw_bits = raw;
}
int	Fixed::toInt() const
{
	return _raw_bits >> _fractional_bits;
}
float	Fixed::toFloat() const
{
	return _raw_bits / (float)(1 << _fractional_bits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return stream;
}