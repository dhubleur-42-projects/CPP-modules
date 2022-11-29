/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:31:05 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 17:38:58 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// Constructors
Converter::Converter()
{
	_asChar = 0;
	_asInt = 0;
	_asFloat = 0;
	_asDouble = 0;
	_intOverflowed = false;
}

Converter::Converter(const Converter &copy)
{
	_asChar = copy.getAsChar();
	_asInt = copy.getAsInt();
	_asFloat = copy.getAsFloat();
	_asDouble = copy.getAsDouble();
	_intOverflowed = copy.getIntOverflowed();
}
Converter::Converter(std::string input)
{
	if(input.length() == 1 && input != "0")
	{
		_asChar = input[0];
		_asInt = static_cast<int>(_asChar);
		_asFloat = static_cast<float>(_asChar);
		_asDouble = static_cast<double>(_asChar);
	}
	else
	{
		t_type type = INT;
		bool	found_point = false;
		size_t i = 0;
		if(input[i] == '+' || input[i] == '-')
			i++;
		for(; input[i]; i++)
		{
			if(std::isdigit(input[i]))
				continue;
			if(input[i] == '.' && !found_point)
			{
				type = DOUBLE;
				found_point = true;
				continue;
			}
			if(input[i] == '.')
			{
				type = NON_NUMERIC;
				break;
			}
			if(input[i] == 'f' && i == input.length() - 1)
			{
				type = FLOAT;
				break;
			}
			type = NON_NUMERIC;
			break;
		}
		if(type == NON_NUMERIC)
		{
			if(input == "-inff" || input == "-inf")
			{
				_intOverflowed = true;
				_asChar = 127;
				_asFloat = (-1) * std::numeric_limits<float>::infinity();
				_asDouble = (-1) * std::numeric_limits<double>::infinity();
			}
			else if(input == "inff" || input == "inf")
			{
				_intOverflowed = true;
				_asChar = 127;
				_asFloat = std::numeric_limits<float>::infinity();
				_asDouble = std::numeric_limits<double>::infinity();
			}
			else if(input == "nanf" || input == "nan")
			{
				_intOverflowed = true;
				_asChar = 127;
				_asFloat = std::numeric_limits<float>::quiet_NaN();
				_asDouble = std::numeric_limits<double>::quiet_NaN();
			}
			else
				throw Converter::NotAConversion();
		}
		if(type == INT && input.length() > 11)
			type = DOUBLE;
		if(type == INT && input[0] == '-' && std::atoi(input.c_str()) >= 0)
			type = DOUBLE;
		if(type == INT && input[0] != '-' && std::atoi(input.c_str()) < 0)
			type = DOUBLE;
		if(type == INT)
		{
			_asInt = std::atoi(input.c_str());
			if(_asInt >= 0 && _asInt <= 127)
				_asChar = static_cast<char>(_asInt);
			else
				_asChar = 127;
			_asFloat = static_cast<float>(_asInt);
			_asDouble = static_cast<double>(_asInt);
		}
		if(type == FLOAT || type == DOUBLE)
		{
			_asFloat = std::atof(input.c_str());
			_asChar = 127;
			_asInt = static_cast<int>(_asFloat);
			if(_asFloat > 2147483647.0 || _asFloat < -2147483648.0)
				_intOverflowed = true;
			_asDouble = static_cast<double>(_asFloat);
		}
	}
}

// Destructor
Converter::~Converter()
{
}


// Operators
Converter & Converter::operator=(const Converter &assign)
{
	_asChar = assign.getAsChar();
	_asInt = assign.getAsInt();
	_asFloat = assign.getAsFloat();
	_asDouble = assign.getAsDouble();
	_intOverflowed = assign.getIntOverflowed();
	return *this;
}


// Getters / Setters
char Converter::getAsChar() const
{
	return _asChar;
}
int Converter::getAsInt() const
{
	return _asInt;
}
float Converter::getAsFloat() const
{
	return _asFloat;
}
double Converter::getAsDouble() const
{
	return _asDouble;
}
bool Converter::getIntOverflowed() const
{
	return _intOverflowed;
}

const char* Converter::NotAConversion::what() const throw()
{
	return "This input cannot be detected as a convertable type";
}

std::ostream &operator<<(std::ostream &stream, Converter const &converter)
{
	if(converter.getIntOverflowed())
		std::cout << GREEN << "- As char   : Impossible" << RESET << std::endl;
	else if(std::isprint(converter.getAsChar()))
		std::cout << GREEN << "- As char   : " << converter.getAsChar() << RESET << std::endl;
	else
		std::cout << GREEN << "- As char   : Non displayable" << RESET << std::endl;
	if(!converter.getIntOverflowed())
		std::cout << GREEN << "- As int    : " << converter.getAsInt() << RESET << std::endl;
	else
		std::cout << GREEN << "- As char   : Impossible" << RESET << std::endl;
	std::cout << GREEN << "- As float  : " << converter.getAsFloat() << (converter.getAsInt() == converter.getAsFloat() ? ".0f" : "f") << RESET << std::endl;
	std::cout << GREEN << "- As double : " << converter.getAsDouble() << (converter.getAsInt() == converter.getAsDouble() ? ".0" : "") << RESET;
	return stream;
}