/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:33 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 15:50:57 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	{
		std::cout << "===== herited methods test =====" << std::endl;
		FragTrap george = FragTrap("George");
		george.attack("Test");
		george.takeDamage(5);
		george.beRepaired(5);
	}
	{
		std::cout << "===== High five test =====" << std::endl;
		FragTrap george = FragTrap("George");
		george.highFivesGuys();
	}
	{
		std::cout << "===== Copy constructor test =====" << std::endl;
		FragTrap george = FragTrap("George");
		FragTrap george2 = FragTrap(george);
		george2.takeDamage(10);
		george.takeDamage(5);
	}
}