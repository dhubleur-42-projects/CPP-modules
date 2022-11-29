/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 10:21:00 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 11:02:38 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <algorithm>

class Span
{
	public:
		// Constructors
		Span();
		Span(const Span &copy);
		Span(unsigned int N);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);
				
		// Exceptions
		class RangeException : public std::exception {
			virtual const char* what() const throw();
		};
		class EmptyException : public std::exception {
			virtual const char* what() const throw();
		};

		// Functions
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
	private:
		unsigned int _N;
		std::vector<int> _vector;
		
};

#endif