/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:06:05 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 09:42:53 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <iostream>

int main()
{
	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(5);

	std::cout << "Search 3: " << *easyfind(vect, 3) << std::endl;
	std::cout << "Search 1: " << *easyfind(vect, 1) << std::endl;
	try
	{
		std::cout << "Search 42: ";
		std::cout << *easyfind(vect, 42) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}