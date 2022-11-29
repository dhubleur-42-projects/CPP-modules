/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:41:05 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 17:45:57 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

// Constructors
Data::Data()
{
	_intData = 0;
}

Data::Data(const Data &copy)
{
	_intData = copy.getIntData();
}

Data::Data(int intData)
{
	_intData = intData;
}


// Destructor
Data::~Data()
{
}


// Operators
Data & Data::operator=(const Data &assign)
{
	_intData = assign.getIntData();
	return *this;
}


// Getters / Setters
int Data::getIntData() const
{
	return _intData;
}


// Stream operators
std::ostream & operator<<(std::ostream &stream, const Data &object)
{
	stream << "My data is " << object.getIntData() << ". I'm stored at " << &object << std::endl;
	return stream;
}
