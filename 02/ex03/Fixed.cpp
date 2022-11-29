/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:54 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 16:32:19 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors
Fixed::Fixed()
{
	//std::cout << "\e[0;33mDefault constructor called\e[0m" << std::endl;
	_raw_bits = 0;
}
Fixed::Fixed(int const i)
{
	//std::cout << "\e[0;33mInt constructor called\e[0m" << std::endl;
	_raw_bits = i << _fractional_bits;
}
Fixed::Fixed(float const f)
{
	//std::cout << "\e[0;33mFloat constructor called\e[0m" << std::endl;
	_raw_bits = roundf(f * (1 << _fractional_bits));
}
Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "\e[0;33mCopy constructor called\e[0m" << std::endl;
	_raw_bits = copy.getRawBits();
}

//Destructors
Fixed::~Fixed()
{
	//std::cout << "\e[0;31mDestructor called\e[0m" << std::endl;
}

//Operators
Fixed & Fixed::operator=(const Fixed &assign)
{
	//std::cout << "\e[0;34mCopy assignment operator called\e[0m" << std::endl;
	_raw_bits = assign.getRawBits();
	return *this;
}

bool Fixed::operator==(const Fixed& compare) const
{
	return _raw_bits == compare.getRawBits();
}
bool Fixed::operator>(const Fixed& compare) const
{
	return _raw_bits > compare.getRawBits();
}
bool Fixed::operator>=(const Fixed& compare) const
{
	return _raw_bits >= compare.getRawBits();
}
bool Fixed::operator<(const Fixed& compare) const
{
	return _raw_bits < compare.getRawBits();
}
bool Fixed::operator<=(const Fixed& compare) const
{
	return _raw_bits <= compare.getRawBits();
}
bool Fixed::operator!=(const Fixed& compare) const
{
	return _raw_bits != compare.getRawBits();
}

Fixed Fixed::operator+(Fixed const &modificator)
{
	Fixed result;
	result.setRawBits(_raw_bits + modificator.getRawBits());
	return result;
}
Fixed Fixed::operator-(Fixed const &modificator)
{
	Fixed result;
	result.setRawBits(_raw_bits - modificator.getRawBits());
	return result;
}
Fixed Fixed::operator*(Fixed const &modificator)
{
	Fixed result;
	result.setRawBits((_raw_bits * modificator.getRawBits()) >> _fractional_bits);
	return result;
}
Fixed Fixed::operator/(Fixed const &modificator)
{
	Fixed result;
	result.setRawBits((_raw_bits << _fractional_bits) / modificator.getRawBits());
	return result;
}
Fixed &Fixed::operator++(void)
{
	_raw_bits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	_raw_bits++;
	return tmp;
}

Fixed &Fixed::operator--(void)
{
	_raw_bits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	_raw_bits--;
	return tmp;
}

//Methods
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

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}
const Fixed & Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b ? a : b);
}
Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
const Fixed & Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

//Other
std::ostream &operator<<(std::ostream &stream, Fixed const &fixed)
{
	stream << fixed.toFloat();
	return stream;
}