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


int main() {

	Array<int> test(4);
	test.printArray();
	test.addValue(10);
	test.printArray();
	Array<double> b(10);
	b.addValue(1);
	b.printArray();
	
	return 0;
}