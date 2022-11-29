/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:52:21 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 14:44:42 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_count = 0;
}

void	PhoneBook::addContact()
{
	Contact	contact = Contact();

	std::string	firstName;
	while(1)
	{
		std::cout << CYAN << "Firstname: " << BLUE;
		std::getline(std::cin, firstName);
		std::cout << RESET;
		if(contact.setFirstName(firstName))
			break;
		std::cout << RED << "Please enter a valid string (only letters, space and -)" << RESET << std::endl;
	}
	std::string	lastName;
	while(1)
	{
		std::cout << CYAN << "Lastname: " << BLUE;
		std::getline(std::cin, lastName);
		std::cout << RESET;
		if(contact.setLastName(lastName))
			break;
		std::cout << RED << "Please enter a valid string (only letters, space and -)" << RESET << std::endl;
	}
	std::string	nickName;
	while(1)
	{
		std::cout << CYAN << "Nickname: " << BLUE;
		std::getline(std::cin, nickName);
		std::cout << RESET;
		if(contact.setNickName(nickName))
			break;
		std::cout << RED << "Please enter a valid string" << RESET << std::endl;
	}
	std::string	phoneNumber;
	while(1)
	{
		std::cout << CYAN << "Phone number: " << BLUE;
		std::getline(std::cin, phoneNumber);
		std::cout << RESET;
		if(contact.setPhoneNumber(phoneNumber))
			break;
		std::cout << RED << "Please enter a valid phone number (only numbers, can start with +)" << RESET << std::endl;
	}
	std::string	darkestSecret;
	while(1)
	{
		std::cout << CYAN << "Darkest secret: " << BLUE;
		std::getline(std::cin, darkestSecret);
		std::cout << RESET;
		if(contact.setDarkestSecret(darkestSecret))
			break;
		std::cout << RED << "Please enter a valid string" << RESET << std::endl;
	}
	if(_count == 8)
	{
		for(int i = 1; i <= 7; i++)
			_contacts[i - 1] = _contacts[i];
		_count = 7;
	}
	_contacts[_count] = contact;
	_count++;
}

void	PhoneBook::addContact(Contact contact)
{
	if(_count == 8)
	{
		for(int i = 1; i <= 7; i++)
			_contacts[i - 1] = _contacts[i];
		_count = 7;
	}
	_contacts[_count] = contact;
	_count++;
}

void	PhoneBook::displayContactTable()
{
	std::cout << PURPLE << "|------------|------------|------------|------------|" << RESET << std::endl;
	std::cout << PURPLE << "|" << YELLOW << "    INDEX   " << PURPLE << "|" << YELLOW << " First name " << PURPLE << "|" << YELLOW << "  Lastname  " << PURPLE << "|" << YELLOW << "  Nickname  " << PURPLE << "|" << RESET << std::endl;
	std::cout << PURPLE << "|============|============|============|============|" << RESET << std::endl;
	for(int i = 0; i < _count; i++)
	{
		std::cout << PURPLE << "|          " << BLUE << i + 1 << PURPLE << " |" << RESET;
		std::cout << " " << BLUE << _contacts[i].getShorFirstName() << PURPLE << " |" << RESET;
		std::cout << " " << BLUE << _contacts[i].getShorLastName() << PURPLE << " |" << RESET;
		std::cout << " " << BLUE << _contacts[i].getShorNickName() << PURPLE << " |" << RESET << std::endl;
		std::cout << PURPLE << "|------------|------------|------------|------------|" << RESET << std::endl;
	}
}

void	PhoneBook::displayContact(std::string i)
{
	if(i.length() != 1)
		std::cout << RED << "Please enter a valid index !" << RESET << std::endl;
	else if(!std::isdigit(i[0]))
		std::cout << RED << "Please enter a valid index !" << RESET << std::endl;
	else
	{
		int index = i[0] - 48;
		if(index < 1 || index > _count)
			std::cout << RED << "This index doesn't exist !" << RESET << std::endl;
		else
			_contacts[index - 1].display();
	}
}