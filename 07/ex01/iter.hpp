/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:21:38 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 19:39:05 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template<typename T>
void iter(T *array, std::size_t length, void (*fct)(T &))
{
	for (std::size_t i = 0; i < length; i++)
		(*fct)(array[i]);
}

#endif