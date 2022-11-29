/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:10:03 by dhubleur          #+#    #+#             */
/*   Updated: 2022/04/26 12:32:18 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class	Harl
{
	public:
		Harl();
		void complain( std::string level );

	private:
		typedef void (Harl::*PrintFct)(void);
		typedef struct {std::string name; PrintFct fct;} LevelList;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif