/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 11:09:57 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/10 11:29:07 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <class T>
class MutantStack: public std::stack <T> 
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack()
		{

		};
		MutantStack(MutantStack &copy) : std::stack<T>(copy)
		{

		};

		~MutantStack()
		{

		};

		MutantStack &operator=(MutantStack const & value)
		{
			this->c = value->c();
		}

		iterator begin(void)
		{
			return this->c.begin();
		}
		iterator end(void)
		{
			return this->c.end();
		}
};

#endif