/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:33 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 14:13:28 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	{
		std::cout << "===== Energy limit test =====" << std::endl;
		ClapTrap george = ClapTrap("George");
		george.attack("Test");
		george.beRepaired(0);
		george.attack("Test");
		george.beRepaired(0);
		george.attack("Test");
		george.beRepaired(0);
		george.attack("Test");
		george.beRepaired(0);
		george.attack("Test");
		george.beRepaired(0);
		george.attack("Test");
		george.beRepaired(0);
	}
	{
		std::cout << "===== Hit points limit test =====" << std::endl;
		ClapTrap george = ClapTrap("George");
		george.takeDamage(10);
		george.attack("Test");
		george.beRepaired(0);
	}
	{
		std::cout << "===== Take damage test =====" << std::endl;
		ClapTrap george = ClapTrap("George");
		george.takeDamage(1);
		george.takeDamage(2);
		george.takeDamage(5);
		george.takeDamage(5);
		george.takeDamage(500);
	}
	{
		std::cout << "===== Repair test =====" << std::endl;
		ClapTrap george = ClapTrap("George");
		george.beRepaired(1);
		george.beRepaired(2);
		george.beRepaired(5);
		george.beRepaired(UINT_MAX);
	}
}