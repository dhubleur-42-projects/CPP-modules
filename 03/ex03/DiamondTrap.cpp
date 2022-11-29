/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:11:13 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/02 10:46:21 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():
    FragTrap("Default_name_clap_name"),
    ScavTrap("Default_name_clap_name")
{
    std::cout << "\e[0;33mDefault DiamondTrap constructor called\e[0m" << std::endl;
    _name = "Default_name";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
}
DiamondTrap::DiamondTrap(std::string name):
    FragTrap(name + "_clap_name"),
    ScavTrap(name + "_clap_name")
{
    std::cout << "\e[0;33mName DiamondTrap constructor called (" << name << ")\e[0m" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
}
DiamondTrap::DiamondTrap(const DiamondTrap &copy):
	FragTrap(copy.getName() + "_clap_name"),
    ScavTrap(copy.getName() + "_clap_name")
{
	std::cout << "\e[0;33mCopy DiamondTrap constructor called\e[0m" << std::endl;
	_name = copy.getName();
	_hitPoints = copy.getHitPoints();
    _energyPoints = copy.getEnergyPoints();
    _attackDamage = copy.getAttackDammage();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\e[0;31mDiamondTrap Destructor called for " << _name << "\e[0m" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &assign)
{
	_name = assign.getName();
    _hitPoints = assign.getHitPoints();
    _energyPoints = assign.getEnergyPoints();
    _attackDamage = assign.getAttackDammage();
	return *this;
}

std::string DiamondTrap::getName() const
{
    return _name;
}

void DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}
void DiamondTrap::whoAmI()
{
	std::cout << "\e[0;35mHi ! I'am the DiamondTrap " << _name << ", but my ClapTrap name is " << ClapTrap::_name << "\e[0m" << std::endl;
}