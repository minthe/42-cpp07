/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 14:46:06 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/13 21:47:09 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/whatever.class.hpp"

int	main()
{
	{
		std::cout << "\x1b[31mTest 1\x1b[0m\n"<< std::endl;

		int a = 4;
		int b = 61;

		std::cout << "max: " << max(a,b) << std::endl;
		std::cout << "min: " << min(a,b) << std::endl;
	}

	{
		std::cout << "\n\x1b[31mTest 2\x1b[0m\n"<< std::endl;

		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	return 0;
}
