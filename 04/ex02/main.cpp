/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:55:45 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 12:23:24 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/*{
		std::cout << "===== Virtual test =====" << std::endl;
		AAnimal animal = AAnimal();
	}*/
	{
		std::cout << "===== Basic test =====" << std::endl;
		const AAnimal* cat = new Cat();
		delete(cat);
	}
	return 0;
}