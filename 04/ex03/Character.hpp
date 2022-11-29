/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:15:18 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 11:37:45 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	public:
		// Constructors
		Character();
		Character(const Character &copy);
		Character(std::string _name);
		
		// Destructor
		~Character();
		
		// Operators
		Character & operator=(const Character &assign);
		
		// Getters / Setters
		virtual std::string const & getName() const;
		virtual int getInventoryCount() const;

		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		
	private:
		std::string _name;
		int _inventoryCount;
		AMateria *_inventory[4];
		
};

#endif