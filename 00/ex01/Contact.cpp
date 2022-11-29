/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:52:26 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 16:41:10 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkestSecret = "";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickName = nickName;
	_phoneNumber = phoneNumber;
	_darkestSecret = darkestSecret;
}

std::string Contact::getShorFirstName()
{
	std::string	result = "";
	if(_firstName.length() <= 10)
	{
		for(size_t i = 0; i < 10 - _firstName.length(); i++)
			result += " ";
		result += _firstName;
	}
	else
	{
		result = _firstName.substr(0, 9);
		result += ".";
	}
	return result;
}
std::string Contact::getShorLastName()
{
	std::string	result = "";
	if(_lastName.length() <= 10)
	{
		for(size_t i = 0; i < 10 - _lastName.length(); i++)
			result += " ";
		result += _lastName;
	}
	else
	{
		result = _lastName.substr(0, 9);
		result += ".";
	}
	return result;
}
std::string Contact::getShorNickName()
{
	std::string	result = "";
	if(_nickName.length() <= 10)
	{
		for(size_t i = 0; i < 10 - _nickName.length(); i++)
			result += " ";
		result += _nickName;
	}
	else
	{
		result = _nickName.substr(0, 9);
		result += ".";
	}
	return result;
}

bool	Contact::setFirstName(std::string firstName)
{
	if(firstName.empty())
		return false;
	for(int i = 0; firstName[i]; i++)
	{
		if(!std::isalpha(firstName[i]) && firstName[i] != '-' && firstName[i] != ' ')
			return false;
	}
	_firstName = firstName;
	return true;
}

bool	Contact::setLastName(std::string lastName)
{
	if(lastName.empty())
		return false;
	for(int i = 0; lastName[i]; i++)
	{
		if(!std::isalpha(lastName[i]) && lastName[i] != '-' && lastName[i] != ' ')
			return false;
	}
	_lastName = lastName;
	return true;
}

bool	Contact::setNickName(std::string nickName)
{
	if(nickName.empty())
		return false;
	_nickName = nickName;
	return true;
}

bool	Contact::setPhoneNumber(std::string phoneNumber)
{
	if(phoneNumber.empty())
		return false;
	if(!std::isdigit(phoneNumber[0]) && phoneNumber[0] != '+')
		return false;
	for(int i = 1; phoneNumber[i]; i++)
	{
		if(!std::isdigit(phoneNumber[i]))
			return false;
	}
	_phoneNumber = phoneNumber;
	return true;
}

bool	Contact::setDarkestSecret(std::string darkestSecret)
{
	if(darkestSecret.empty())
		return false;
	_darkestSecret = darkestSecret;
	return true;
}

void	Contact::display()
{
	std::cout << YELLOW << "========== Contact informations ==========" << RESET << std::endl;
	std::cout << CYAN << "First name     : " << BLUE << _firstName << RESET << std::endl;
	std::cout << CYAN << "Last name      : " << BLUE << _lastName << RESET << std::endl;
	std::cout << CYAN << "Nickname       : " << BLUE << _nickName << RESET << std::endl;
	std::cout << CYAN << "Phone number   : " << BLUE << _phoneNumber << RESET << std::endl;
	std::cout << CYAN << "Darkest secret : " << BLUE << _darkestSecret << RESET << std::endl;
}