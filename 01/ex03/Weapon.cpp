/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:58:38 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 19:58:38 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	_type = "Default type";
}
Weapon::Weapon(std::string type)
{
	_type = type;
}

std::string	Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}