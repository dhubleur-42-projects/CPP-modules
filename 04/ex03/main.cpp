/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:06:37 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 12:17:30 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	{
		std::cout << "========== Subject test ==========" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "========== Deep Copy test ==========" << std::endl;
		Character me = Character("me");
		me.equip(new Ice());
		Character notMe = Character(me);
		notMe.equip(new Cure());
		Character bob = Character("bob");
		std::cout << "1): ";
		me.use(1, bob);
		std::cout << std::endl;
		std::cout << "2): ";
		notMe.use(1, bob);
	}
	{
		std::cout << "========== On the floor test ==========" << std::endl;
		AMateria *ice = new Ice();
		Character me = Character("me");
		me.equip(ice);
		me.unequip(0);
		Character bob = Character("bob");
		std::cout << "1): ";
		me.use(0, bob);
		std::cout << std::endl;
		me.equip(ice);
		std::cout << "2): ";
		me.use(0, bob);
	}
}