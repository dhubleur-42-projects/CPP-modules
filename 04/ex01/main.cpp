/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:55:45 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/29 12:58:06 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		std::cout << "===== Leaks test =====" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}
	{
		std::cout << "===== Deep Copy test =====" << std::endl;
		Cat test = Cat();
		test.getBrain()->setIdea(0, "idea 0");
		test.getBrain()->setIdea(1, "idea 1");
		Cat test2 = Cat(test);
		test2.getBrain()->setIdea(1, "New idea 1");
		std::cout << "Cat 1 think about: 0) " << test.getBrain()->getIdea(0) << ", 1) " << test.getBrain()->getIdea(1) << std::endl;
		std::cout << "Cat 2 think about: 0) " << test2.getBrain()->getIdea(0) << ", 1) " << test2.getBrain()->getIdea(1) << std::endl;
	}
	{
		std::cout << "===== List test =====" << std::endl;
		Animal	*animals[100];
		for(int i = 0; i < 100; i++)
		{
			if(i % 2 == 0)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		for(int i = 0; i < 100; i++)
			delete(animals[i]);
	}
	return 0;
}