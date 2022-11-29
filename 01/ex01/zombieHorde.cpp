/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 17:02:18 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 17:02:18 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombies = new Zombie[N]();
	for(int i = 0; i < N; i++)
		zombies[i].setName(name);
	return zombies;
}