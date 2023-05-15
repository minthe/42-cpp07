/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 13:56:56 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Array.class.hpp"

#define TestInd 10

int	main()
{
	
// Test 1:
	{	
		try {
			std::cout << "\x1b[47mTest 1\x1b[0m\n"<< std::endl;

			Array<int> test(25);
			Array<int> test2;
			Array<int> test3(15);
			Array<int> test4;
			std::cout << "test1: " << test.size() << std::endl;
			std::cout << "test2: " << test2.size() << std::endl;
			std::cout << "test3: " << test3.size() << std::endl;
			test3 = test;
			std::cout << "test3: " << test3.size() << "_element[" << TestInd << "] '" << test3[TestInd] << "'" << std::endl;
			test3[10] = 99;
			std::cout << "test3: " << test3.size() << "_element[" << TestInd << "] '" << test3[TestInd] << "'" << std::endl;
			test3 = test;
			std::cout << "test3: " << test3.size() << "_element[" << TestInd << "] '" << test3[TestInd] << "'" << std::endl;
			std::cout << "test: " << test.size() << "_element[" << TestInd << "] '" << test[TestInd] << "'" << std::endl;
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

			const Array<int> test(25);
			std::cout << "test: " << test.size() << "_element[" << TestInd << "] '" << test[TestInd] << "'" << std::endl;
			test[10] = 2;
			std::cout << "test: " << test.size() << "_element[" << TestInd << "] '" << test[TestInd] << "'" << std::endl;
		}

		catch (const std::exception& e) {
			std::cerr << "\x1b[31mexception caught: " << e.what() << "\x1b[0m" << std::endl;
		}
	}
	return 0;

}
