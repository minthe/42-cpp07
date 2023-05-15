/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 20:02:50 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 10:08:52 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_TPP
#define ARRAY_CLASS_TPP

template< typename T >
Array<T>::Array() : _array(new Array<T>[0]) {}

template< typename T >
Array<T>::~Array() {}

template< typename T >
Array<T>::Array(unsigned int n) : _array(new Array<T>[n]) {}

template< typename T >
Array<T>::Array

#endif
