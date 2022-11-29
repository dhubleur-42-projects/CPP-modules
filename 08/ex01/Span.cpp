/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:21:02 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 11:03:57 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span()
{
	_N = 0;
}

Span::Span(const Span &copy)
{
	_N = copy._N;
	_vector.clear();
	_vector.insert(_vector.end(), copy._vector.begin(), copy._vector.end());
}

Span::Span(unsigned int N)
{
	_N = N;
}


// Destructor
Span::~Span()
{}


// Operators
Span & Span::operator=(const Span &assign)
{
	if(this != &assign)
	{
		_N = assign._N;
		_vector.clear();
		_vector.insert(_vector.end(), assign._vector.begin(), assign._vector.end());
	}
	return *this;
}

// Functions
void Span::addNumber(int number)
{
	if(_vector.size() == _N)
		throw Span::RangeException();
	_vector.push_back(number);
}

int Span::shortestSpan()
{
	if(_vector.size() < 2)
		throw Span::EmptyException();
	std::vector<int> copy = std::vector<int>(_vector);
	std::sort(copy.begin(), copy.end());
	int result = copy[1] - copy[0];
	for(unsigned long i = 2; i < copy.size(); i++)
	{
		if(copy[i] - copy[i - 1] < result)
			result = copy[i] - copy[i - 1];
	}
	return result;
}

int Span::longestSpan()
{
	if(_vector.size() < 2)
		throw Span::EmptyException();
	int max = *std::max_element(_vector.begin(), _vector.end());
	int min = *std::min_element(_vector.begin(), _vector.end());
	return (max - min);
}

void Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for(std::vector<int>::iterator it = begin; it < end; it++)
	{
		if(_vector.size() == _N)
			throw Span::RangeException();
		_vector.push_back(*it);
	}
}

// Exceptions
const char * Span::RangeException::what() const throw()
{
	return "Add element out of range";
}
const char * Span::EmptyException::what() const throw()
{
	return "Span has not 2 elements";
}
