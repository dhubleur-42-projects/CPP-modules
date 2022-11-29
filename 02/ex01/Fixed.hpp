/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:29:01 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 15:13:33 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed & operator=(const Fixed &assign);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		int	toInt() const;
		float	toFloat() const;

	private:
		int	_raw_bits;
		static const int	_fractional_bits = 8;
};

std::ostream &operator<<(std::ostream &stream, Fixed const &fixed);

#endif