/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:21:49 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 19:39:30 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

void print(int &number)
{
	std::cout << number << std::endl;
}

void square(int &i)
{
	i *= 2;
}

int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	::iter(array, 5, &print);
	std::cout << std::endl;
	::iter(array, 5, square);
	::iter(array, 5, &print);
}