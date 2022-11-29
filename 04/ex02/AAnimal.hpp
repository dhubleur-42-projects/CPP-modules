/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:56:44 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 12:23:13 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &copy);
		AAnimal & operator=(const AAnimal &assign);
		virtual ~AAnimal() = 0;
		std::string	getType() const;
		virtual void makeSound() const;

	protected:
		std::string _type;
};

#endif