/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 16:44:55 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/14 18:15:15 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"
#include <exception>
#include <iostream>

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T > // const version
void print(const T & x ) { std::cout << x << std::endl; return; }


int main() {
	
	try
	{
		int tab[] = { 0, 1, 2, 3, 4 }; 
		Awesome tab2[5];
		const Awesome tab3[5];

		::iter( tab, 5, print<int> );
		::iter( tab2, 5, print<Awesome> ); // if len is > array, garbage/segfault
		// ::iter( tab3, 5, print<Awesome> );
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << ": length must be > 0" << std::endl;
 	}
	return 0;
}
