/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:52 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 10:06:11 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <iostream>
#include <exception>

template< typename T >
class Array
{
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& src);
		Array<T>& operator=(const Array<T>& rhs);
		~Array<T>();
	private:
		Array<T>* _array;
};

#include "Array.class.tpp"

#endif
