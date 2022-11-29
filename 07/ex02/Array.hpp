/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhubleur <dhubleur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 19:40:59 by dhubleur          #+#    #+#             */
/*   Updated: 2022/05/09 21:53:27 by dhubleur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstddef>
# include <stdexcept>

template <class T>
class Array
{
	public:
		Array()
		{
			_array = NULL;
			_size = 0;
		};
		Array(unsigned int n)
		{
			_array = new T[n]();
			_size = n;
		};
		Array(const Array<T>& copy)
		{
			_array = new T[copy.size()];
			_size = copy.size();
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = copy._array[i];
		};
		Array<T>& operator=(const Array<T>& assign)
		{
			if (this != &assign)
			{
				delete[] _array;
				_array = new T[assign.size()];
				_size = assign.size();
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = assign._array[i];
			}
			return *this;
		};
		~Array()
		{
			delete[] _array;
		};
		T& operator[](unsigned int index)
		{
			if (index >= _size)
				throw std::overflow_error("index out of range");
			return _array[index];
		};
		unsigned int size() const
		{
			return _size;
		};

	private:
		T *_array;
		unsigned int _size;
};

#endif