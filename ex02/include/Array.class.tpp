/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 13:18:41 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
#define ARRAY_CLASS_TPP

#include <exception>
template< typename T >
Array<T>::Array() : _size(0), _element(new T[_size]) {
	_element[0] = 0;
}

template< typename T >
Array<T>::~Array() {
	if (_element)
		delete[] _element;
	// std::cout << this << ": deconstructor called" << std::endl;
}

template< typename T >
Array<T>::Array(unsigned int n) : _size(n), _element(new T[_size]) {
	for (size_t i = 0; i < _size; i++)
		_element[i] = 0;
}

template< typename T >
Array<T>::Array(const Array<T>& src) {
	_size = src.getSize();
	_element = new T[_size];
	for (size_t i = 0; i < _size; i++)
		_element[i] = src._element[i];
}

template< typename T >
Array<T>&	Array<T>::operator=(const Array<T>& rhs) {
	if (this != &rhs)
	{
		_size = rhs.getSize();
		delete[] _element;
		_element = new T[_size];
		for (size_t i = 0; i < _size; i++)
			_element[i] = rhs.getElement(i);
	}
	return *this;
}

template< typename T >
unsigned int	Array<T>::size() const {
	return _size;
}

// ACCESSORS

template< typename T >
T				Array<T>::getElement(const unsigned int i) const {
	if (i > _size)
		throw std::exception();
	return _element[i];
}

template< typename T >
unsigned int	Array<T>::getSize() const {
	return _size;
}

// EXCEPTION

#endif
