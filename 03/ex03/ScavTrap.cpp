/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:45:31 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 10:28:30 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap():
	ClapTrap()
{
	std::cout << "\e[0;33mDefault ScavTrap constructor called\e[0m" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name):
	ClapTrap(name)
{
	std::cout << "\e[0;33mName Scavtrap constructor called (" << name << ")\e[0m" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_name = name;
}
ScavTrap::ScavTrap(const ScavTrap &copy):
	ClapTrap(copy)
{
	std::cout << "\e[0;33mCopy Scavtrap constructor called\e[0m" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &assign)
{
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getEnergyPoints();
	_name = assign.getName();
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\e[0;31mScavTrap Destructor called for " << _name << "\e[0m" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if(_hitPoints == 0)
		std::cout << "\e[0;34mScavTrap " << _name << " cannot attack because it has 0 hit points !\e[0m" << std::endl;
	else if(_energyPoints == 0)
		std::cout << "\e[0;34mScavTrap " << _name << " cannot attack because it has 0 energy points !\e[0m" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "\e[0;32mScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !\e[0m" << std::endl;
	}
}
void ScavTrap::guardGate()
{
	std::cout << "\e[0;32mScavTrap " << _name << " is now in gate keeper mode\e[0m" << std::endl;
}