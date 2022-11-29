/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:57:20 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 11:26:48 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog & operator=(const Dog &assign);
		~Dog();
		void makeSound() const;
};

#endif