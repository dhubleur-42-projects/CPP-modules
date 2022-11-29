/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:20 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 12:17:19 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Constructors
Character::Character()
{
	_name = "Unknown";
	_inventoryCount = 0;
	for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(const Character &copy)
{
	_name = copy.getName();
	_inventoryCount = copy.getInventoryCount();
	for(int i = 0; i < _inventoryCount; i++)
		_inventory[i] = copy._inventory[i]->clone();
	for(int i = _inventoryCount; i < _inventoryCount; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	_name = name;
	_inventoryCount = 0;
	for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}


// Destructor
Character::~Character()
{
	for(int i = 0; i < _inventoryCount; i++)
		delete(_inventory[i]);
}


// Operators
Character & Character::operator=(const Character &assign)
{
	_name = assign.getName();
	for(int i = 0; i < _inventoryCount; i++)
		delete(_inventory[i]);
	_inventoryCount = assign.getInventoryCount();
	for(int i = 0; i < _inventoryCount; i++)
		_inventory[i] = assign._inventory[i]->clone();
	for(int i = _inventoryCount; i < _inventoryCount; i++)
		_inventory[i] = NULL;
	return *this;
}


// Getters / Setters
std::string const & Character::getName() const
{
	return _name;
}
int Character::getInventoryCount() const
{
	return _inventoryCount;
}


void Character::equip(AMateria *m)
{
    if (_inventoryCount < 3)
    {
        this->_inventory[_inventoryCount] = m;
        _inventoryCount++;
    }
}

void Character::unequip(int idx)
{
	for(int i = idx + 1; i < _inventoryCount; i++)
		_inventory[i - 1] = _inventory[i];
	_inventory[_inventoryCount - 1] = NULL;
	_inventoryCount--;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < _inventoryCount)
        _inventory[idx]->use(target);
}