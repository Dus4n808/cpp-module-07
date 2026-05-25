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


int main() {

	// ===== Copy =====
	Array<int> a(2);
	Array<int> b(a);

	// ===== Assing =====
	Array<int> c(2);
	Array<int> d(2);
	c = d;

	try {
		for (int i = 0; i < c.size(); i++) {
			c[i] = i + 1;
		}
		c.printArray();
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	a.printArray();
	b.printArray();

	// ===== Exception Index =====
	std::cout << a.size() << std::endl;
	try {
		a[4] = 23;
		std::cout << a[4] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		a[1] = 34;
		std::cout << a[1] << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	
	return 0;
}