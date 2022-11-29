/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:41:00 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 17:41:01 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

class Data
{
	public:
		// Constructors
		Data();
		Data(const Data &copy);
		Data(int intData);
		
		// Destructor
		~Data();
		
		// Operators
		Data & operator=(const Data &assign);
		
		// Getters / Setters
		int getIntData() const;
		
	private:
		int _intData;
		
};

// Stream operators
std::ostream & operator<<(std::ostream &stream, const Data &object);

#endif