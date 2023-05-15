/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:52 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 15:35:31 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <iostream>
#include <exception>

template< typename T >
class Array {

	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& src);
		Array<T>& operator=(const Array<T>& rhs);
		~Array<T>();

		T& 				operator[] (size_t index); // subscript operator overload
		T&				operator[] (size_t index) const; // subscript operator overload -> for const values
		
		unsigned int	size() const;
		unsigned int	getSize() const;
		void			setElement(size_t index, int value);

	private:
		unsigned int	_size;
		T*				_element;

};

template< typename T >
std::ostream	&operator<<(std::ostream &o, const Array<T> &array);

#include "Array.class.tpp"

#endif
