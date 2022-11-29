/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:45:39 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 12:06:55 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
    _inventoryCount = 0;
    for (int i = 0; i < 4; i += 1)
        _inventory[i] = NULL;
    
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    _inventoryCount = copy.getInventoryCount();
	for(int i = 0; i < _inventoryCount; i++)
		_inventory[i] = copy._inventory[i]->clone();
	for(int i = _inventoryCount; i < _inventoryCount; i++)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for(int i = 0; i < _inventoryCount; i++)
		delete(_inventory[i]);
}

int MateriaSource::getInventoryCount() const
{
	return _inventoryCount;
}

MateriaSource &MateriaSource::operator= (const MateriaSource &assign)
{
	for(int i = 0; i < _inventoryCount; i++)
		delete(_inventory[i]);
    _inventoryCount = assign.getInventoryCount();
	for(int i = 0; i < _inventoryCount; i++)
		_inventory[i] = assign._inventory[i]->clone();
	for(int i = _inventoryCount; i < _inventoryCount; i++)
		_inventory[i] = NULL;
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (_inventoryCount < 3)
    {
        _inventory[_inventoryCount] = m;
        _inventoryCount += 1;
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for(int i = 0; i < _inventoryCount; i++)
	{
		if(_inventory[i]->getType() == type)
			return _inventory[i]->clone();
	}
    return (NULL);
}