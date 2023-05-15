/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 16:01:49 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Array.class.hpp"

#define TestInd 4

int	main()
{
	
// Test 1:
	{	
		try {
			std::cout << "\x1b[47mTest 1\x1b[0m\n"<< std::endl;

			Array<int> test0(5);
			Array<int> test2;
			Array<int> test3(5);
			Array<int> test4;
			test3 = test0;
			std::cout << "test3: " << test3 << std::endl;
			test3[4] = 99;
			std::cout << "test3: " << test3 << std::endl;
			test3 = test0;
			std::cout << "test3: " << test3 << std::endl;
			std::cout << "test0: " << test0 << std::endl;
			// test4[0] = 1;
			// std::cout << "test4: " << test4.size() << "_element[" << 0 << "] '" << test4[0] << "'" << std::endl;
		}

		catch (const std::exception& e) {
			std::cerr << "\x1b[31mexception caught: " << e.what() << "\x1b[0m" << std::endl;
		}
	}

// Test 2: const instances
	{	
		try {
			std::cout << "\x1b[47m\nTest 2: const instances\x1b[0m\n"<< std::endl;

			Array<const int> test(5);
			std::cout << test << std::endl;
			// test[2] = 2; // trying to change const value
			std::cout << test << std::endl;
		}

		catch (const std::exception& e) {
			std::cerr << "\x1b[31mexception caught: " << e.what() << "\x1b[0m" << std::endl;
		}
	}
	return 0;

}
