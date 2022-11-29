/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:31 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 10:28:15 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap():
	ClapTrap()
{
	std::cout << "\e[0;33mDefault FragTrap constructor called\e[0m" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}
FragTrap::FragTrap(std::string name):
	ClapTrap(name)
{
	std::cout << "\e[0;33mName FragTrap constructor called (" << name << ")\e[0m" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_name = name;
}
FragTrap::FragTrap(const FragTrap &copy):
	ClapTrap(copy)
{
	std::cout << "\e[0;33mCopy FragTrap constructor called\e[0m" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &assign)
{
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getEnergyPoints();
	_name = assign.getName();
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "\e[0;31mFragTrap Destructor called for " << _name << "\e[0m" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "\e[0;32mFragTrap " << _name << " wants to high five !\e[0m" << std::endl;
}