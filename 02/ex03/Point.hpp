/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:05:26 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 12:37:51 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	public:
		Point();
		Point(float const x, float const y);
		Point(const Point &copy);
		~Point();
		Point & operator=(const Point &assign);
		bool operator==(const Point& compare) const;
		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif