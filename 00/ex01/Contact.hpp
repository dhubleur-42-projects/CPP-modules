/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:52:15 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 14:45:27 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include "colors.h"

class	Contact
{
	public:
		Contact();
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		std::string	getShorFirstName();
		std::string	getShorLastName();
		std::string	getShorNickName();
		bool		setFirstName(std::string firstName);
		bool		setLastName(std::string lastName);
		bool		setNickName(std::string nickName);
		bool		setPhoneNumber(std::string phoneNumber);
		bool		setDarkestSecret(std::string darkestSecret);
		void		display();

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif