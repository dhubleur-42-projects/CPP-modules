/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:05:06 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 12:38:54 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():
	_x(Fixed(0)),
	_y(Fixed(0))
{
}
Point::Point(float const x, float const y):
	_x(Fixed(x)),
	_y(Fixed(y))
{
}
Point::Point(const Point &copy):
	_x(copy.getX()),
	_y(copy.getY())
{
}

Point::~Point()
{
}

Point & Point::operator=(const Point &assign)
{
	//this->~Point();
    //new (this) Point(assign);
	(void)assign;
	return *this;
}
bool Point::operator==(const Point& compare) const
{
	if(_x.getRawBits() != compare.getX().getRawBits())
		return false;
	if(_y.getRawBits() != compare.getY().getRawBits())
		return false;
	return true;
}

Fixed Point::getX() const
{
	return _x;
}
Fixed Point::getY() const
{
	return _y;
}