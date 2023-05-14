/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:52 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 00:56:41 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
#define ARRAY_CLASS_HPP

#include <iostream>

template< typename T >
class Array
{
	public:
		Array<T>();
		~Array<T>();
		std::string getName() const;
	private:
		std::string	_name;
};

#include "Array.class.tpp"

#endif
