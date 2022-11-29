/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 12:18:04 by dhubleur          #+#    #+#             */
/*   Updated: 2022/02/01 12:45:29 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	get_side(Point const a, Point const b, Point const p)
{
	float	onX = (p.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat());
	float	onY = (p.getY().toFloat() - a.getY().toFloat()) * (b.getX().toFloat() - a.getX().toFloat());
	if(onX - onY == 0)
		return 0;
	return (onX - onY > 0) ? 1 : -1;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if(point == a || point == b || point == c)
	{
		return false;
	}
	if(get_side(a, b, point) == 0 || get_side(a, b, point) != get_side(a, b, c))
	{
		return false;
	}
	if(get_side(a, c, point) == 0 || get_side(a, c, point) != get_side(a, c, b))
	{
		return false;
	}
	if(get_side(b, c, point) == 0 || get_side(b, c, point) != get_side(b, c, a))
	{
		return false;
	}
	return true;
}