/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:33 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 15:44:27 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	{
		std::cout << "===== herited methods test =====" << std::endl;
		ScavTrap george = ScavTrap("George");
		george.attack("Test");
		george.takeDamage(5);
		george.beRepaired(5);
	}
	{
		std::cout << "===== Guard gate test =====" << std::endl;
		ScavTrap george = ScavTrap("George");
		george.guardGate();
	}
	{
		std::cout << "===== Copy constructor test =====" << std::endl;
		ScavTrap george = ScavTrap("George");
		ScavTrap george2 = ScavTrap(george);
		george2.takeDamage(10);
		george.takeDamage(5);
	}
}