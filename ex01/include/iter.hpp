/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:36:15 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/14 18:15:02 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <exception>
#include <iostream>

template< typename T >
void	iter( T* array, int len, void (*fn)(const T&))
{
	if (len < 1)
		throw std::exception();
	for (int i = 0; i < len; i++)
		fn(array[i]);
}

template< typename T > // const variant
void	iter(const T* array, int len, void (*fn)(const T&))
{
	if (len < 1)
		throw std::exception();
	for (int i = 0; i < len; i++)
		fn(array[i]);
}

#endif
