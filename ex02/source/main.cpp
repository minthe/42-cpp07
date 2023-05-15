/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 19:55:32 by vfuhlenb          #+#    #+#             */
/*   Updated: 2023/05/15 12:34:32 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Array.class.hpp"

int	main()
{
	{	
		std::cout << "\x1b[31mTest 1\x1b[0m\n"<< std::endl;

		Array<float> test(25);
		Array<int> test2(15);
		Array<int> test3;
		std::cout << "test1: " << test.size() << std::endl;
		std::cout << "test2: " << test2.size() << std::endl;
		std::cout << "test3: " << test3.size() << std::endl;
		test3 = test2;
		std::cout << "test3: " << test3.size() << std::endl;
	}
	return 0;
}