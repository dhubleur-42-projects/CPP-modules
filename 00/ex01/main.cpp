/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:43:49 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 14:47:35 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "colors.h"

int	main(int argc, char **argv)
{
	PhoneBook phoneBook = PhoneBook();

	if(argc == 2)
	{
		std::string arg = argv[1];
		if(arg == "fill")
		{
			phoneBook.addContact(Contact("Contact1", "Contact1", "Contact1", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact2", "Contact2", "Contact2", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact3", "Contact3", "Contact3", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact4", "Contact4", "Contact4", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact5", "Contact5", "Contact5", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact6", "Contact6", "Contact6", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact7", "Contact7", "Contact7", "+0123456789", "Secret"));
			phoneBook.addContact(Contact("Contact8", "Contact8", "Contact8", "+0123456789", "Secret"));
		}
	}

	while(1)
	{
		std::string command;
		std::cout << CYAN << "Phonebook > " << BLUE;
		std::getline(std::cin, command);
		std::cout << RESET;
		if(command == "ADD")
		{
			std::cout << YELLOW << "========== Contact creation ==========" << std::endl;
			std::cout << "Specify the informations of the new contact" << RESET << std::endl;
			phoneBook.addContact();
			std::cout << GREEN << "Contact created !" << RESET << std::endl;
		}
		else if(command == "SEARCH")
		{
			phoneBook.displayContactTable();
			std::cout << std::endl;
			std::cout << CYAN << "Specify an index to show more about this contact: " << BLUE;
			std::string index;
			std::getline(std::cin, index);
			std::cout << RESET;
			phoneBook.displayContact(index);
		}
		else if(command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << RED << "Command not recognized (Available: ADD/SEARCH/EXIT)" << RESET << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << GREEN << "Goodbye !" << RESET << std::endl;
}