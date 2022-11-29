/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:24:30 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 11:14:06 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "Unknown";
}
AMateria::AMateria(const AMateria &copy)
{
	_type = copy.getType();
}
AMateria::AMateria(std::string const & type)
{
	_type = type;
}

AMateria::~AMateria()
{}

AMateria & AMateria::operator=(const AMateria &assign)
{
	_type = assign.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}