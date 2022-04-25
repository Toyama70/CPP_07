/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:03:12 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/25 18:58:26 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

	template <typename T>
	class Array {
	public:
		Array() : _n(0) { _array = new T[0];}
		~Array() {};
		Array(unsigned int n) : _n(n) { _array = new T[_n];}

		Array(const Array& other) : _n(other.size())
		{	
			_array = new T[_n];
			for (int i = 0; i < _n; i++)
				_array[i] = other.getArray()[i];
		}
	
		T & operator[]( unsigned int i )
		{
			if (i < 0 || i >= this->_n)
				throw(std::exception());
			return (this->_array[i]);
		}
		Array& operator=(const Array& rhs)
		{
			_n = rhs.size();
			delete [] _array;
			_array = new T[_n];
			for (int i = 0; i < _n; i++)
				_array[i] = rhs.getArray()[i];
		}

		const int size() {return _n;}
		const T*	getArray() {return (_array);}
		const T getLine(int n) { return _array[n]; }

	private:
		unsigned int _n;
		T* _array;
	};


#endif