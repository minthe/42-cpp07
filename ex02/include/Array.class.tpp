/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 10:41:02 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
#define ARRAY_CLASS_TPP

template< typename T >
Array<T>::Array() : _array(new Array<T>[0]), _size(0) {}

template< typename T >
Array<T>::~Array() {
	delete[] _array;
}

template< typename T >
Array<T>::Array(unsigned int n) : _array(new Array<T>[n]), _size(n) {}

template< typename T >
Array<T>::Array(const Array<T>& src) {
	_size = src._size;
	_array = new Array<T>[_size];
	for (size_t i; i < _size; i++)
		_array[i] = src._array[i];
}

template< typename T >
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
	if (this != &rhs)
	{
		_size = rhs._size;
		delete[] _array;
		_array = new Array<T>[_size];
		for (size_t i; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return *this;
}

template< typename T >
unsigned int	Array<T>::size() const {
	return _size;
}

#endif
