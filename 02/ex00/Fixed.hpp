/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:29:01 by dhubleur          #+#    #+#             */
/*   Updated: 2022/01/31 13:42:28 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed
{
	public:
		Fixed();
		Fixed(Fixed &copy);
		~Fixed();
		Fixed & operator=(const Fixed &assign);
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int	_raw_bits;
		static const int	_fractional_bits = 8;
};

#endif