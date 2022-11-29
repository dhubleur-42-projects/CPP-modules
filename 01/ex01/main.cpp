/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:02:44 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 17:02:44 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	Zombie	*zombies = zombieHorde(5, "Patrick");
	for(int i = 0; i < 5; i++)
	{
		std::cout << "Called zombie " << i << ": ";
		zombies[i].announce();
	}
	delete[](zombies);

	/*Zombie	*zombies2 = zombieHorde(5, "Patrick");
	for(int i = 0; i < 10; i++)
	{
		std::cout << "Called zombie " << i << ": ";
		zombies2[i].announce();
	}*/
}