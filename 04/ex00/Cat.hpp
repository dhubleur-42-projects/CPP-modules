/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:58:14 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 11:27:01 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		Cat & operator=(const Cat &assign);
		~Cat();
		void makeSound() const;
};

#endif