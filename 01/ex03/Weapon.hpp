/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 19:58:46 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/29 19:58:46 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
	public:
		Weapon();
		Weapon(std::string type);
		std::string	getType() const;
		void		setType(std::string type);

	private:
		std::string	_type;
};

#endif