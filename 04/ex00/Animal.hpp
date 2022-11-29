/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:56:44 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 11:26:07 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal & operator=(const Animal &assign);
		virtual ~Animal();
		std::string	getType() const;
		virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif