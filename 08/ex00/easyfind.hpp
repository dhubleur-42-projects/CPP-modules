/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 09:06:24 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 09:54:06 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <stdexcept>
# include <algorithm>

template<typename T>
typename T::iterator easyfind(T &container, int const search)
{

	typename T::iterator it = find(container.begin(), container.end(), search);
	if (it != container.end())
		return it;
	throw std::invalid_argument("value is not in the container");
}

#endif