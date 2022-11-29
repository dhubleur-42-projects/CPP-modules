/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:57:20 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 13:08:48 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	public:
		Dog();
		Dog(const Dog &copy);
		Dog & operator=(const Dog &assign);
		~Dog();
		void makeSound() const;
		Brain *getBrain() const;
	
	private:
		Brain *_brain;
};

#endif