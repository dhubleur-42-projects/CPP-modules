/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:52:24 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 14:44:23 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include "colors.h"
class	PhoneBook
{
	public:
		PhoneBook();
		void	addContact();
		void	addContact(Contact contact);
		void	displayContactTable();
		void	displayContact(std::string i);

	private:
		Contact	_contacts[8];
		int		_count;
};

#endif