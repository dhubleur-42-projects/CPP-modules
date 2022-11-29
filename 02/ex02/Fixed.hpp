/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:29:01 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 15:59:57 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		//Constructors
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed &copy);

		//Destructors
		~Fixed();

		//Operators
		Fixed & operator=(const Fixed &assign);
		bool operator==(const Fixed& compare) const;
		bool operator>(const Fixed& compare) const;
		bool operator>=(const Fixed& compare) const;
		bool operator<(const Fixed& compare) const;
		bool operator<=(const Fixed& compare) const;
		bool operator!=(const Fixed& compare) const;

		Fixed	operator+(Fixed const &modificator);
		Fixed	operator-(Fixed const &modificator);
		Fixed	operator*(Fixed const &modificator);
		Fixed	operator/(Fixed const &modificator);
		Fixed & operator++(void);
		Fixed operator++(int);
		Fixed & operator--(void);
		Fixed operator--(int);

		//Methods
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int	toInt() const;
		float	toFloat() const;

		static Fixed & min(Fixed &a, Fixed &b);
		static const Fixed & min(Fixed const &a, Fixed const &b);
		static Fixed & max(Fixed &a, Fixed &b);
		static const Fixed & max(Fixed const &a, Fixed const &b);

	private:
		int	_raw_bits;
		static const int	_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);

#endif