/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:11:10 by dufama            #+#    #+#             */
/*   Updated: 2026/05/22 13:11:10 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/Array.hpp"
#include <exception>
#include <iostream>


// int main() {

// 	// ===== Copy =====
// 	Array<int> a(2);
// 	Array<int> b(a);

// 	// ===== Assing =====
// 	Array<int> c(2);
// 	Array<int> d(2);
// 	c = d;

// 	try {
// 		for (int i = 0; i < c.size(); i++) {
// 			c[i] = i + 1;
// 		}
// 		c.printArray();
// 	}
// 	catch (std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}

// 	a.printArray();
// 	b.printArray();

// 	// ===== Exception Index =====
// 	std::cout << a.size() << std::endl;
// 	try {
// 		a[4] = 23;
// 		std::cout << a[4] << std::endl;
// 	}
// 	catch (std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}
// 	try {
// 		a[1] = 34;
// 		std::cout << a[1] << std::endl;
// 	}
// 	catch (std::exception& e) {
// 		std::cerr << e.what() << std::endl;
// 	}

	
// 	return 0;
// }
#include <cstdlib>
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}