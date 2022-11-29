/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:19:15 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/09 15:05:40 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.h"
#include "Converter.hpp"

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		std::cout << RED << "Please specify only one argument !" << RESET << std::endl;
		return 1;
	}
	try
	{
		Converter converter = Converter(argv[1]);	
		std::cout << YELLOW << "===== Converting \'" << argv[1] << "\' =====" << RESET << std::endl;
		std::cout << converter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << RED << "Impossible to initiate converter because: " << e.what() << RESET << std::endl;
		return 1;
	}
	return 0;
}