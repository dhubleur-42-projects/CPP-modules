/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:51:37 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 16:51:37 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main()
{
	//Stack allocated example
	Zombie	pierre = Zombie("Pierre");
	pierre.announce();

	//Heap allocated example
	Zombie	*pierrick = newZombie("Pierrick");
	pierrick->announce();
	delete(pierrick);

	//random Chump example
	randomChump("Victor");
}