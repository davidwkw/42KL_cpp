/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:31:30 by kwang             #+#    #+#             */
/*   Updated: 2022/04/04 17:20:58 by kwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP

#define ARRAY_HPP
#include <exception>

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _size;

	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(Array<T> const & src);
		Array<T> &operator=(Array<T> const & src);
		T &operator[](int i);

		T * getArray(void) const;
		unsigned int size(void) const;

	class IndexOutOfBoundsException : public std::exception
	{
		public:
			const char *what() const throw();
	};

};

template <typename T>
Array<T>::Array(void) : _array(new T[0]) , _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array<T> const & src) : _array(new T[src._size]) ,_size(src._size)
{
	*this = src;
}

template <typename T>
Array<T>::~Array(void) {
	delete [] this->_array;
}

template <typename T>
T * Array<T>::getArray(void) const
{
	return (this->_array);
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return (this->_size);
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & src)
{
	if (this != &src)
	{
		for (unsigned int i = 0; i < src._size; i++)
			this->_array[i] = src._array[i];
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](int i)
{
	if (i < 0 || static_cast<unsigned int>(i) > this->_size - 1)
		throw IndexOutOfBoundsException();
	return (this->_array[i]);
}

template <typename T>
const char * Array<T>::IndexOutOfBoundsException::what() const throw()
{
	return ("Index is out of bounds");
}

#endif
