/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:35 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 16:01:32 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a(10);
	Fixed b(42.42f);
	Fixed c(a);
	
	std::cout << "========= Comparison tests =========" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "a == b : " << (a == b ? "true" : "false") << std::endl;
	std::cout << "a == c : " << (a == c ? "true" : "false") << std::endl;
	std::cout << "a != b : " << (a != b ? "true" : "false") << std::endl;
	std::cout << "a != c : " << (a != c ? "true" : "false") << std::endl;
	std::cout << "a > b : " << (a > b ? "true" : "false") << std::endl;
	std::cout << "b > a : " << (b > a ? "true" : "false") << std::endl;
	std::cout << "a > c : " << (a > c ? "true" : "false") << std::endl;
	std::cout << "a >= b : " << (a >= b ? "true" : "false") << std::endl;
	std::cout << "b >= a : " << (b >= a ? "true" : "false") << std::endl;
	std::cout << "a >= c : " << (a >= c ? "true" : "false") << std::endl;
	std::cout << "a < b : " << (a < b ? "true" : "false") << std::endl;
	std::cout << "b < a : " << (b < a ? "true" : "false") << std::endl;
	std::cout << "a < c : " << (a < c ? "true" : "false") << std::endl;
	std::cout << "a <= b : " << (a <= b ? "true" : "false") << std::endl;
	std::cout << "b <= a : " << (b <= a ? "true" : "false") << std::endl;
	std::cout << "a <= c : " << (a <= c ? "true" : "false") << std::endl;
	
	std::cout << std::endl;
	a = Fixed(5);
	b = Fixed(5.5f);
	c = Fixed(2.5f);
	std::cout << "========= Arithmetic tests =========" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "b - c = " << b - c << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "a / c = " << a / c << std::endl;
	a = Fixed(0);
	std::cout << "a is " << a << std::endl;
	std::cout << "Post increment: " << a++ << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "Pre increment: " << ++a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "Post decrement: " << a-- << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "Pre decrement: " << --a << std::endl;
	std::cout << "a is " << a << std::endl;

	std::cout << std::endl;
	a = Fixed(2.5f);
	b = Fixed(5.5f);
	std::cout << "========= Functions tests =========" << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
}