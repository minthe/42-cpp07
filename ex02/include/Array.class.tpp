/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 16:01:57 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
#define ARRAY_CLASS_TPP

#include <exception>
#include <iostream>

template< typename T >
Array<T>::Array() : _size(0), _element(new T[0]) {}

template< typename T >
Array<T>::~Array() {
	if (_element)
		delete[] _element;
	// std::cout << this << ": deconstructor called" << std::endl;
}

template< typename T > // not const values
Array<T>::Array(unsigned int n): _size(n), _element(new T[n]()) {} // T[n]() -> calls base constructor for each element

template< typename T >
Array<T>::Array(const Array<T>& src) {
	_size = src.getSize();
	_element = new T[_size]();
	for (size_t i = 0; i < _size; i++)
		_element[i] = src._element[i];
}

template< typename T >
Array<T>&	Array<T>::operator=(const Array<T>& rhs) {
	if (this != &rhs)
	{
		_size = rhs.getSize();
		if (_element)
			delete[] _element;
		if (rhs._size > 0)
		{
			_element = new T[_size];
			for (size_t i = 0; i < _size; i++)
				_element[i] = rhs[i];
		}
		else
		{
			_size = 0;
			_element = 0;
		}
	}
	return *this;
}

template< typename T >
unsigned int	Array<T>::size() const {
	return _size;
}

// ACCESSORS

template< typename T >
unsigned int	Array<T>::getSize() const {
	return _size;
}

template< typename T >
void			Array<T>::setElement(size_t index, int value)
{
	if (index >= _size)
		throw std::out_of_range ("out of bounds");
	_element[index] = value;
}

// OVERLOADS

template< typename T >
T&				Array<T>::operator[] (size_t index)
{
	if (index >= _size)
		throw std::out_of_range ("out of bounds");
	return _element[index];
}

template< typename T > // for const values
T&				Array<T>::operator[] (size_t index) const
{
	if (index >= _size)
		throw std::out_of_range ("out of bounds");
	return _element[index];
}

template< typename T >
std::ostream	&operator<<(std::ostream &o, const Array<T> &array)
{
	o << "size [" << array.getSize() << "]";
	for (size_t i = 0; i < array.getSize(); i++)
		o << " " << array[i];
	return o;
}

#endif
