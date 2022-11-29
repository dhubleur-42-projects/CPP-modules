/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:13:30 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 17:13:30 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "===== Basic test =====" << std::endl;
	std::cout << "String memory address      : " << &str << std::endl;
	std::cout << "Address held by stringPTR  : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value               : " << str << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF         : " << stringREF << std::endl;


	/*std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "===== Change str value =====" << std::endl;
	str = "HI THIS IS AN OTHER BRAIN";
	std::cout << "String memory address      : " << &str << std::endl;
	std::cout << "Address held by stringPTR  : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value               : " << str << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF         : " << stringREF << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "===== Change pointed value =====" << std::endl;
	*stringPTR = "HI THIS IS MY BRAIN";
	std::cout << "String memory address      : " << &str << std::endl;
	std::cout << "Address held by stringPTR  : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value               : " << str << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF         : " << stringREF << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "===== Change reference value =====" << std::endl;
	stringREF = "HI THIS IS YOUR BRAIN";
	std::cout << "String memory address      : " << &str << std::endl;
	std::cout << "Address held by stringPTR  : " << stringPTR << std::endl;
	std::cout << "Address held by stringREF  : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "String value               : " << str << std::endl;
	std::cout << "Value pointed by stringPTR : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF         : " << stringREF << std::endl;*/
}