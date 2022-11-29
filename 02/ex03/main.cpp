/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:28:35 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 12:49:40 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point	p1 = Point(0, 0);
	Point	p2 = Point(1, 1);
	Point	p3 = Point(-1, 1);

	Point	test = Point(0, 0);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test) ? "true" : "false") << std::endl;

	Point test2 = Point(0.66, 0.66);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test2) ? "true" : "false") << std::endl;

	Point test3 = Point(0, 0.5);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test3) ? "true" : "false") << std::endl;

	Point test4 = Point(-0.68, 0.86);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test4) ? "true" : "false") << std::endl;

	Point test5 = Point(0.5, -0.6);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test5) ? "true" : "false") << std::endl;

	Point test6 = Point(0, 1.01);
	std::cout << "Is in: " << (bsp(p1, p2, p3, test6) ? "true" : "false") << std::endl;
}