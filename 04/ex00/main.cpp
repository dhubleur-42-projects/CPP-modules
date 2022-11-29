/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:55:45 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 12:55:50 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "------------- Gived test -------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		dog->makeSound();
		cat->makeSound();
		meta->makeSound();
		delete(meta);
		delete(dog);
		delete(cat);
	}
	{
		std::cout << "------------- Wrong animal test -------------" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();
		meta->makeSound();
		delete(meta);
		delete(cat);
	}
	return 0;
}