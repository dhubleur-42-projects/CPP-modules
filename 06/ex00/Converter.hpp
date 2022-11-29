/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:31:09 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/10 10:34:45 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <iostream>
# include <string>
# include <colors.h>
# include <cstdlib>
# include <limits>

class Converter
{
	public:
		// Constructors
		Converter();
		Converter(const Converter &copy);
		Converter(std::string input);	
		// Destructor
		~Converter();
		
		// Operators
		Converter & operator=(const Converter &assign);
		
		// Getters / Setters
		char getAsChar() const;
		int getAsInt() const;
		float getAsFloat() const;
		double getAsDouble() const;
		bool getIntOverflowed() const;
		
		class NotAConversion: public std::exception {
			virtual const char* what() const throw();
		};
		
	private:
		char _asChar;
		int _asInt;
		float _asFloat;
		double _asDouble;
		bool _intOverflowed;
		typedef enum e_type
		{
			INT,
			FLOAT,
			DOUBLE,
			NON_NUMERIC
		}	t_type;
		
};

std::ostream &operator<<(std::ostream &stream, Converter const &converter);

#endif