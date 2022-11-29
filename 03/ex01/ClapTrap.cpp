/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:52:45 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/27 10:22:01 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "\e[0;33mDefault ClapTrap constructor called\e[0m" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	_name = "Default name";
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout << "\e[0;33mName ClapTrap constructor called (" << name << ")\e[0m" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	_name = name;
}
ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "\e[0;33mCopy ClapTrap constructor called\e[0m" << std::endl;
	_hitPoints = copy.getHitPoints();
	_energyPoints = copy.getEnergyPoints();
	_attackDamage = copy.getAttackDammage();
	_name = copy.getName();
}

ClapTrap::~ClapTrap()
{
	std::cout << "\e[0;31mClapTrap Destructor called for " << _name << "\e[0m" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &assign)
{
	_hitPoints = assign.getHitPoints();
	_energyPoints = assign.getEnergyPoints();
	_attackDamage = assign.getEnergyPoints();
	_name = assign.getName();
	return *this;
}

std::string ClapTrap::getName() const
{
	return _name;
}
unsigned int ClapTrap::getHitPoints() const
{
	return _hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const
{
	return _energyPoints;
}
unsigned int ClapTrap::getAttackDammage() const
{
	return _attackDamage;
}

void ClapTrap::attack(const std::string& target)
{
	if(_hitPoints == 0)
		std::cout << "\e[0;34mClaptrap " << _name << " cannot attack because it has 0 hit points !\e[0m" << std::endl;
	else if(_energyPoints == 0)
		std::cout << "\e[0;34mClaptrap " << _name << " cannot attack because it has 0 energy points !\e[0m" << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "\e[0;32mClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage !\e[0m" << std::endl;
	}
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "\e[0;32mClapTrap " << _name << " takes " << amount << " damages. It has now " << _hitPoints << " hit points !\e[0m" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if(_hitPoints == 0)
		std::cout << "\e[0;34mClaptrap " << _name << " cannot repair because it has 0 hit points !\e[0m" << std::endl;
	else if(_energyPoints == 0)
		std::cout << "\e[0;34mClaptrap " << _name << " cannot repair because it has 0 energy points !\e[0m" << std::endl;
	else
	{
		_energyPoints--;
		if(amount > UINT_MAX - _hitPoints)
			_hitPoints = UINT_MAX;
		else
			_hitPoints += amount;
		std::cout << "\e[0;32mClapTrap " << _name << " repaire itself for " << amount << " points. It has now " << _hitPoints << " hit points !\e[0m" << std::endl;
	}
}