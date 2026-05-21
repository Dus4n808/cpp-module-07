/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 18:39:56 by dufama            #+#    #+#             */
/*   Updated: 2026/05/21 18:39:56 by dufama           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/iter.hpp"
#include <cctype>
#include <cstddef>
#include <string>

void stringUp(std::string& toChange) {
	for (size_t i = 0; i < toChange.length(); i++)
		toChange[i] = std::toupper(toChange[i]);
}

int main() {
	//Different Array
	int arrayOfInt[] = {1, 2, 3};
	double arrayOfDouble[] = {12.1, 23.23, 43.12};
	std::string arrayOfString[] = {"Coucou", "les", "loulou"};

	std::cout << "===== Array(Double) =====" << std::endl;
	iter(arrayOfDouble, 3, printArray<double>);

	std::cout << "===== Add one (double) =====" << std::endl;
	iter(arrayOfDouble, 3, addOne<double>);
	iter(arrayOfDouble, 3, printArray<double>);
	
	std::cout << "===== Array(int) =====" << std::endl;
	iter(arrayOfInt, 3, printArray<int>);
	
	std::cout << "===== Add one (int) =====" << std::endl;
	iter(arrayOfInt, 3, addOne<int>);
	iter(arrayOfInt, 3, printArray<int>);
	
	std::cout << "===== Second Array(string) =====" << std::endl;
	iter(arrayOfString, 3, printArray<std::string>);
	
	std::cout << "===== UpperCase =====" << std::endl;
	iter(arrayOfString, 3, stringUp);
	iter(arrayOfString, 3, printArray<std::string>);
	
	return 0;
}