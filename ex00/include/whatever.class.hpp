/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:46:42 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/13 21:39:57 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS_H
#define	WHATEVER_CLASS_H

// MIN (const in/out)
template< typename T >
T const &	min( T const & x, T const & y )
{
	return (x <= y ? x : y);
}

// MAX (const in/out)
template< typename T >
T const &	max( T const & x, T const & y )
{
	return (x >= y ? x : y);
}
#endif

// SWAP (const in/out)
template< typename T >
void	swap( T & a, T & b )
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
