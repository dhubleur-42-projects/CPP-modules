/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:58:14 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 13:08:42 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include <Brain.hpp>

class Cat: public AAnimal
{
	public:
		Cat();
		Cat(const Cat &copy);
		Cat & operator=(const Cat &assign);
		~Cat();
		void makeSound() const;
		Brain *getBrain() const;
	
	private:
		Brain *_brain;
};

#endif