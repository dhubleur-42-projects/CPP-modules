/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:33 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 10:45:19 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	{
		std::cout << "===== herited methods test =====" << std::endl;
		DiamondTrap george = DiamondTrap("George");
		george.attack("Test");
		george.takeDamage(5);
		george.beRepaired(5);
	}
	{
		std::cout << "===== Who am I test =====" << std::endl;
		DiamondTrap george = DiamondTrap("George");
		george.whoAmI();
	}
	{
		std::cout << "===== Copy constructor test =====" << std::endl;
		DiamondTrap george = DiamondTrap("George");
		DiamondTrap george2 = DiamondTrap(george);
		george2.takeDamage(10);
		george.takeDamage(5);
		george.whoAmI();
		george2.whoAmI();
	}
}