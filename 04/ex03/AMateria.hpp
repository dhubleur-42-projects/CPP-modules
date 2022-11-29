/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 13:09:21 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 11:27:33 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria &copy);
		AMateria(std::string const & type);

		AMateria & operator=(const AMateria &assign);

		virtual ~AMateria();

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string _type;
};

#endif