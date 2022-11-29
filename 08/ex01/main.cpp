/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:44:02 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 11:08:51 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include <iostream>

int main()
{
	{
		std::cout << "========== Subject test ==========" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "========== Error test ==========" << std::endl;
		Span sp = Span(1);
		sp.addNumber(1);
		try
		{
			sp.addNumber(1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "========== Fill test ==========" << std::endl;
		std::vector<int> vect;
		for(int i = 0; i < 100; i++)
			vect.push_back(i);

		Span sp = Span(100);
		sp.fill(vect.begin(), vect.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::vector<int> vect;
		for(int i = 0; i < 1000; i++)
			vect.push_back(i);

		Span sp = Span(100);
		try
		{
			sp.fill(vect.begin(), vect.end());
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "========== Big span test ==========" << std::endl;
		Span sp = Span(50000);
		for(int i = 0; i < 50000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}